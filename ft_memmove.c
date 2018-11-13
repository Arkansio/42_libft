/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:11:43 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/13 14:34:39 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	size_t		j;
	char		*sdst;
	char		*ssrc;

	sdst = (char*)dst;
	ssrc = (char*)src;
	i = 0;
	j = 0;
	if (ssrc == sdst)
		return (dst);
	while (i < len)
	{
		if (ssrc < sdst)
		{
			sdst = (ft_revmemcpy(sdst, ssrc, len));
			dst = sdst;
			return (dst);
		}
		sdst[i] = ssrc[j];
		i++;
		j++;
	}
	dst = sdst;
	return (dst);
}
