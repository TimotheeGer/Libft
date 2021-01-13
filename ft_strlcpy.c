/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:38:26 by tigerber          #+#    #+#             */
/*   Updated: 2021/01/08 16:33:14 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	int j;
	
	i = 0;
	j = 0;
	if (!src || !dst)
		return (0);
	while (src[j] != '\0')
	{
		j++;
	}
	while (i < size)
	{
		if ((src[i] != '\0') && (i < size - 1))
		{
			dst[i] = src[i];
		}
		else
		{
			dst[i] = '\0';
			return (j);
		}
		i++;
	}
	return (j);
}
