/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:55:47 by tigerber          #+#    #+#             */
/*   Updated: 2021/01/11 15:42:57 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void *(*del)(void *))
{
	t_list *newlst;
	t_list *newelement;

	if ((!(lst)) || (!(f)))
		return (NULL);
	while (lst)
	{
		newelement = ft_lstnew(f(lst->content));
		lst = lst->next;
		newlst = newelement;
		ft_lstadd_back(&newlst, newelement);
		if (!newelement)
			ft_lstclear(&newlst, (void*)del);
	}
	return (newlst);
}
