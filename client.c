/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:23:28 by sramasam          #+#    #+#             */
/*   Updated: 2025/11/21 18:19:30 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static volatile sig_atomic_t	g_bit_ack = 0;

static void	send_signal(int sig)
{
	static int	bit_sent = 0;

	if (sig == SIGUSR1)
	{
		bit_sent++;
		g_bit_ack = 1;
	}
	else if (sig == SIGUSR2)
	{
		ft_printf("✔ Server confirmed: Message received\n");
		exit (0);
	}
}

static void	send_char(pid_t pid, char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		g_bit_ack = 0;
		if ((c >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (!g_bit_ack)
			usleep(10);
		bit--;
	}
}

static void	send_str(pid_t pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_char(pid, str[i]);
		i++;
	}
	send_char(pid, '\0');
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if ((pid <= 0) || (kill(pid, 0) < 0))
		{
			ft_printf("Invalid PID\n");
			return (1);
		}
		signal(SIGUSR1, send_signal);
		signal(SIGUSR2, send_signal);
		send_str(pid, argv[2]);
		while (1)
			pause();
	}
	else
		ft_printf("Please resend as: ./client <pid> <string>\n");
	return (0);
}
