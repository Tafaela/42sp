/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rermacor <rermacor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:54:17 by rermacor          #+#    #+#             */
/*   Updated: 2026/04/19 15:31:03 by rermacor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
printf("TESTE 1 * %d, %d\n", ft_strncmp("batatinha 123", "batatinha", 15), 
strncmp("batatinha 123", "batatinha", 15));
printf("TESTE 2 * %d, %d\n", ft_strncmp("batatinha 123", "batatinha123", 5), 
strncmp("batatinha 123", "batatinha123", 5));
printf("TESTE 3 * %d, %d\n", ft_strncmp("batatinha", "batatinha123", 5), 
strncmp("batatinha", "batatinha123", 5));
printf("TESTE 4 * %d, %d\n", ft_strncmp("batatinha123", "batatinha", 5), 
strncmp("batatinha123", "batatinha", 5));
printf("TESTE 5 * %d, %d\n", ft_strncmp("batatinha123", "batatinha", 11), 
strncmp("batatinha123", "batatinha", 11));
printf("TESTE 6 * %d, %d\n", ft_strncmp("batatinha 123", "batatinha", 15), 
strncmp("batatinha 123", "batatinha", 15));
printf("TESTE 7 * %d, %d\n", ft_strncmp("batatinha", "batatinha123", 15), 
strncmp("batatinha", "batatinha123", 15));
printf("TESTE 8 * %d, %d\n", ft_strncmp("abc", "xyz", 0), 
strncmp("abc", "xyz", 0));
printf("TESTE 9 * %d, %d\n", ft_strncmp("hello", "hello", 10), 
strncmp("hello", "hello", 10));
printf("TESTE 10 * %d, %d\n", ft_strncmp("abc", "xbc", 3), 
strncmp("abc", "xbc", 3));
printf("TESTE 11 * %d, %d\n", ft_strncmp("abz", "abc", 3), 
strncmp("abz", "abc", 3));
printf("TESTE 12 * %d, %d\n", ft_strncmp("abc", "abcd", 10), 
strncmp("abc", "abcd", 10));
printf("TESTE 13 * %d, %d\n", ft_strncmp("abcd", "abc", 10), 
strncmp("abcd", "abc", 10));
printf("TESTE 14 * %d, %d\n", ft_strncmp("abcdef", "abcxyz", 3), 
strncmp("abcdef", "abcxyz", 3));
printf("TESTE 15 * %d, %d\n", ft_strncmp("abcde", "abcdf", 5), 
strncmp("abcde", "abcdf", 5));
printf("TESTE 16 * %d, %d\n", ft_strncmp("", "", 5), 
strncmp("", "", 5));
printf("TESTE 17 * %d, %d\n", ft_strncmp("", "abc", 5), 
strncmp("", "abc", 5));
printf("TESTE 18 * %d, %d\n", ft_strncmp("abc", "", 5), 
strncmp("abc", "", 5));
printf("TESTE 19 * %d, %d\n", ft_strncmp("abc\n", "abc\t", 4), 
strncmp("abc\n", "abc\t", 4));
printf("TESTE 20 * %d, %d\n", ft_strncmp("abc\200", "abc\0", 4), 
strncmp("abc\200", "abc\0", 4));
printf("TESTE 21 * %d, %d\n", ft_strncmp("abc", "abc", 1000), 
strncmp("abc", "abc", 1000));
}
*/