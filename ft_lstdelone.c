/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:46:29 by lana              #+#    #+#             */
/*   Updated: 2020/10/13 20:48:25 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst && *alst)
	{	
		if (del)
			del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}		
	return;
}
