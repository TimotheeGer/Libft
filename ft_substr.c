/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:05:53 by tigerber          #+#    #+#             */
/*   Updated: 2021/01/13 11:19:14 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	int				i;
	unsigned int	max;

	i = 0;
	if (!s)
		return (NULL);
	max = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < (int)len && start < max)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
