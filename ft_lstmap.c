/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 16:04:16 by lana              #+#    #+#             */
/*   Updated: 2020/10/14 17:50:35 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

t_list *ft_copy (t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if ((new = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((new = f(lst)) == NULL)
	{
		free(new);
		new = NULL;
	}
	new->next = NULL;
	return (new);
}

void	ft_clean(t_list *lst)
{
	t_list	*next;

	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	return;
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new_begin;
	t_list	*new_first;

	if (f)
	{
		if ((new_begin = ft_copy(lst, f)) == NULL)
			return NULL;
		new_first = new_begin;
		if (!lst->next)
		{
			while (lst)
			{
				if ((new = ft_copy(lst, f)) == NULL)
				{
					ft_clean(new_begin);
					return (NULL);
				}
				new_first->next = new;
				new_first = new;
				lst = lst->next;
			}
			
		}
	}
	return(new_begin);
}
