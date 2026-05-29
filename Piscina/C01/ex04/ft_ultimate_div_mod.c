/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 05:00:48 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/10 14:40:26 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	r;
	int	s;

	r = *a / *b;
	s = *a % *b;
	*a = r;
	*b = s;
}
/*
int	main(void)
{
	int	black;
	int	pink;

	black = 10;
	pink = 2;

	ft_ultimate_div_mod(&black, &pink);
	printf("divição = %d\n", black);
	printf("sobra = %d\n", pink);
	return (0);
}
*/