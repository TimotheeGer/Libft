/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:42:11 by tigerber          #+#    #+#             */
/*   Updated: 2021/01/11 12:00:46 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!(ptr = malloc(count * size)))
		return (NULL);
	while (i < (int)(count * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
