/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:25:14 by rermacor          #+#    #+#             */
/*   Updated: 2026/06/16 17:11:49 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	cont;

	cont = 0;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cont++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (cont);
}

static void	ft_free(char **array, int j)
{
	while (j > 0)
		free(array[--j]);
	free(array);
}

static size_t	ft_word_len(char const **s, char c)
{
	size_t	i;

	i = 0;
	while ((*s)[i] != c && (*s)[i] != '\0')
		i++;
	return (i);
}

static char	**ft_fillarray(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		i = ft_word_len(&s, c);
		array[j] = ft_substr(s, 0, i);
		if (!array[j])
		{
			ft_free(array, j);
			return (NULL);
		}
		s += i;
		j++;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (ft_fillarray(array, s, c));
}
