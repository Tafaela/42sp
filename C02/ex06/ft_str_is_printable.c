/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:05:16 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/18 17:32:31 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_printable("abc"));
	printf("%d\n", ft_str_is_printable("ABC"));
	printf("%d\n", ft_str_is_printable("!@#"));
	printf("%d\n", ft_str_is_printable("aB1"));
	printf("%d\n", ft_str_is_printable("\0"));
	return (0);
}
