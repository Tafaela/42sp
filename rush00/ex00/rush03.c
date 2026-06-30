/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 11:43:36 by rermycor          #+#    #+#             */
/*   Updated: 2026/04/05 19:24:03 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	my;
	int	mx;

	my = 1;
	while (my <= y)
	{
		mx = 1;
		while (mx <= x)
		{
			if ((my == 1 && mx == 1) || (my == y && mx == 1))
				ft_putchar('A');
			else if ((my == 1 && mx == x) || (my == y && mx == x))
				ft_putchar('C');
			else if (my == 1 || my == y || mx == 1 || mx == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			mx++;
		}
		ft_putchar('\n');
		my++;
	}
}
