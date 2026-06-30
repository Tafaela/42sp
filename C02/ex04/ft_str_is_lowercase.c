/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:40:43 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/18 14:45:32 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_lowercase("abc"));
	printf("%d\n", ft_str_is_lowercase("ABC"));
	printf("%d\n", ft_str_is_lowercase("ac1"));
	printf("%d\n", ft_str_is_lowercase("ac!"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
*/