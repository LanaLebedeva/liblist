/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:30:04 by lana              #+#    #+#             */
/*   Updated: 2020/10/14 14:53:09 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new && alst && *alts)
	{
		new->next = *alst;
		*alst = new;
	}
	return;
}