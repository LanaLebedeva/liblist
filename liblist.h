/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 13:18:28 by lana              #+#    #+#             */
/*   Updated: 2020/10/12 19:58:05 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIST_H
# define LIBLIST_H

#include <stdlib.h>
#include <string.h>

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void 			ft_lstdel(t_list **alst, void (*del)(void *, size_t));

#endif
