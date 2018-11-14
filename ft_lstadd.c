/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:49:42 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/14 19:18:23 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list		*tmp;

	if (!alst || !new)
		return ;
	if (!alst[0])
	{
		alst[0] = new;
		return ;
	}
	tmp = alst[0];
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
