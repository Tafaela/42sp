/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:36:23 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/10 14:37:33 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	copo;

	copo = *a;
	*a = *b;
	*b = copo;
}
/*
int	main(void)
{
	int	black;
	int	pink;

	black = 27;
	pink = 47;
	ft_swap(&black, &pink);
	printf("black %d\n", black);
	printf("pink %d\n", pink);
	return (0);
}
*/