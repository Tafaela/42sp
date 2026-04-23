/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:04:37 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/16 14:53:28 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

int	main(void)
{
	char	src[] = "Black Pink";
	char	dest[6];
	unsigned int	result;

	result = ft_strlcpy(dest, src, sizeof(dest));

	printf("src? %s\n", src);
	printf("dest: %s\n", dest);
	printf("retorno (tamanho de src): %u\n", result);
	return (0);
}
