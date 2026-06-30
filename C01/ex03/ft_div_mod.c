/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 01:39:48 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/10 14:39:09 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	jisoo;
	int	jennie;
	int	rose;
	int	lisa;

	jisoo = 16;
	jennie = 8;

	ft_div_mod(jisoo, jennie, &rose, &lisa);
	printf("divisão = %d\n", rose);
	printf("sobra = %d\n", lisa);
	return (0);
}
*/