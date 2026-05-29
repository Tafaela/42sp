/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:39:49 by rermacor          #+#    #+#             */
/*   Updated: 2026/05/28 14:18:00 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*g;
	size_t	result;

	result = nmemb * size;
	g = malloc(result);
	if (g == NULL)
		return (NULL);
	ft_bzero(g, result);
	return (g);
}
