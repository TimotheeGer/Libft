/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:33:05 by tigerber          #+#    #+#             */
/*   Updated: 2021/01/12 15:59:20 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//#include <stdlib.h>
//#include <libc.h>
static int	countword(char const *str, char c)
{
	int	i;
	int sep;
	int word;

	i = 0;
	sep = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && sep == 1)
		{
			sep = 0;
		}
		if (str[i] != c && sep == 0)
		{
			sep = 1;
			word++;
		}
		i++;
	}
	return (word);
}

static char	*getword(char const *s, int i, int newword)
{
	int		index;
	int		size;
	char	*ptr;

	size = i - newword;
	index = 0;
	if (!(ptr = malloc(sizeof(char) * ((newword) + 1))))
		return (NULL);
	while (size < i)
	{
		ptr[index] = s[size];
		size++;
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

char	**getsplit(char **ptr, char const *s, char c, int count)
{
	int i;
	int j;
	int newword;

	i = 0;
	j = -1;
	newword = 0;
	while (++j < count)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			newword++;
		}
		ptr[j] = getword(s, i, newword);
		newword = 0;
	}
	ptr[j] = (NULL);
	return (ptr);
}

char		**ft_split(char const *s, char c)
{
	int		count;
	char	**ptr;

	if (!s)
		return (NULL);
	count = countword(s, c);
	if (!(ptr = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	ptr = getsplit(ptr, s, c, count);
	return (ptr);
}
/*
 #include <stdio.h>

 int main(int ac, char *av[])
 {
 	(void)ac;
 	int i = 0;
 	char **str2 = ft_split(av[1], ' ');
 	while (str2[i][0] != (NULL))
 	{
 		printf("ft_split = %s\n", str2[i]);
 		i++;
 	}
 	return (0);
 }*/
