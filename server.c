/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:11 by sramasam          #+#    #+#             */
/*   Updated: 2025/11/21 14:36:13 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	signal_receiver(int signal, siginfo_t *info, void *context)
{
	static int	bit = 7;
	static char	c = 0;

	(void)context;
	if (signal == SIGUSR1)
		c = c | (1 << bit);
	else if (signal == SIGUSR2)
		c = c & ~(1 << bit);
	bit--;
	if (bit < 0)
	{
		if (c)
			ft_putchar_fd(c, 1);
		else
		{
			ft_putchar_fd('\n', 1);
			kill(info->si_pid, SIGUSR2);
		}
		c = 0;
		bit = 7;
	}
	kill(info->si_pid, SIGUSR1);
}

void	init_signal(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = signal_receiver;
	sa.sa_flags = SA_SIGINFO | SA_RESTART | SA_NODEFER;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
}

int	main(void)
{
	ft_printf("<PID: %d>\n", getpid());
	init_signal();
	while (1)
		pause();
}
