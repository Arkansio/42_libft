/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:11:43 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/08 19:48:49 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char* tdst;
	unsigned char* tsrc;

	tdst = (unsigned char*)dst;
	tsrc = (unsigned char*)src;
	if(!ft_memalloc(len))
		return (NULL);
	i = 0;
	while (i < len)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}
