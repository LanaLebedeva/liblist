/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 13:19:20 by lana              #+#    #+#             */
/*   Updated: 2020/10/12 19:57:34 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"
#include <stdio.h>
#include <unistd.h>

void	*copy_content(void const *content, size_t content_size)
{
	void		*new;
	unsigned char	*ptr_in;
	unsigned char	*ptr_out;

	content_size++;
	if ((new = (void *)malloc(content_size)) == NULL)
		return (NULL);
	ptr_in = (unsigned char *)content;
	ptr_out = (unsigned char *)new;
	while (content_size-- != 0)		
	{
		*(ptr_out++) = *(ptr_in++);
		write(1, ptr_out, 1);
	}
	return (new);
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	if ((new_list = (t_list*)malloc(sizeof(t_list))) == NULL)
		return NULL;
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		if((new_list->content=(void *)malloc(content_size)) == NULL)
		{
			free(new_list);
			return (NULL);
		}
		memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
	}
	new_list->next = NULL;
	return(new_list);
}
