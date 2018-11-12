/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:11:43 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/12 18:46:47 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;
	char			*tmp;

	tdst = (unsigned char*)dst;
	tsrc = (unsigned char*)src;
	if (!(tmp = ft_strnew(len)))
		return (NULL);
	ft_memcpy(tmp, tsrc, len);
	ft_memcpy(tdst, tmp, len);
	free(tmp);
	return (dst);
}
