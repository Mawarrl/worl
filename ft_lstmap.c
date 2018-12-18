/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlardere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:23:29 by rlardere          #+#    #+#             */
/*   Updated: 2018/11/24 14:58:19 by rlardere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;
	t_list	*tmp;
	if (lst == NULL || (*f) == NULL)
		return (NULL);
	if (!(copy = ft_lstnew(lst->content, lst->content_size)))
		return (0);
	copy = (*f)(copy);
	lst = lst->next;
	copy = copy->next;
	tmp = copy;
	while (lst != NULL)
	{
		if (lst == NULL || lst->content == NULL)
			return (NULL);
		if (!(copy = ft_lstnew(lst->content, lst->content_size)))
			return (0);
		copy = (*f)(copy);
		lst = lst->next;
		copy = copy->next;
	}
	return (tmp);
}
