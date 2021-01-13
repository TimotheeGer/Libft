/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:33:11 by tigerber          #+#    #+#             */
/*   Updated: 2020/12/08 12:40:19 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			i;
	int			j;
	const char	*src;
	const char	*dest;

	i = 0;
	j = 0;
	src = haystack;
	dest = needle;
	while (src[i] != '\0' && (size_t)i < len - 1)
	{
		while ((src[i] == dest[j]) && (dest[j] != '\0'))
		{
			i++;
			j++;
		}
		if (dest[j] == '\0')
		{
			return ((char*)&src[i - j]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
