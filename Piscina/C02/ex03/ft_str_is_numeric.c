/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:47:17 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/15 15:53:11 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("012"));
	printf("%d\n", ft_str_is_numeric("987"));
	printf("%d\n", ft_str_is_numeric("78a"));
	printf("%d\n", ft_str_is_numeric("01!"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
*/