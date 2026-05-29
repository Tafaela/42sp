/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:21:10 by rermacor          #+#    #+#             */
/*   Updated: 2026/05/29 11:33:35 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		dstlen;

	d = dest;
	s = src;
	dstlen = ft_strlen(dest);
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (s[i] != '\0' && dstlen + i < dstsize - 1)
	{
		d[dstlen + i] = s[i];
		i++;
	}
	d[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}
