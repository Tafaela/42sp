/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:52:20 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/15 16:05:42 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ABC"));
	printf("%d\n", ft_str_is_uppercase("AB1"));
	printf("%d\n", ft_str_is_uppercase("AB!"));
	printf("%d\n", ft_str_is_uppercase("abc"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}
*/