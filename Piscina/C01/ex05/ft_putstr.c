/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 08:28:15 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/10 17:20:24 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		write(1, &str[f], 1);
		f++;
	}
}
/*
int	main(void)
{
	ft_putstr("BLACKPINK IN YOUR AREA");
	return (0);
}
*/