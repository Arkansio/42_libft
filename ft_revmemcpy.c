/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revmemcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:18:19 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/13 14:57:16 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_revmemcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	int			size;
	int			sz_src;

	i = 0;
	sz_src = ft_strlen((char*)src);
	size = ft_strlen((char*)dst);
	while (i < n)
	{
		((char*)dst)[size - 1 - i] = ((char*)src)[sz_src - 1 - i];
		i++;
	}
	return (dst);
}
