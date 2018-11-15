/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:57:46 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/15 15:10:45 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*chain;

	chain = NULL;
	if (!(chain = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	chain->next = NULL;
	if (content != NULL)
	{
		chain->content = (void*)content;
		chain->content_size = content_size;
	}
	else
	{
		chain->content = NULL;
		chain->content_size = 0;
	}
	return (chain);
}
