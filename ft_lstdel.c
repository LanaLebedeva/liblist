/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:34:58 by lana              #+#    #+#             */
/*   Updated: 2020/10/13 22:02:12 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp;
	
	if (alst)
	{
		while(*alst)
		{
			temp = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = temp;		
		}
	}
	return;
}
