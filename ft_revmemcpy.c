/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revmemcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 00:40:08 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/14 00:43:10 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_revmemcpy(void *restrict dst, const void *restrict src, size_t n)
{
        while (n-- >= 0)
                ((char*)dst)[n] = ((char*)src)[n];
        return (dst);
}
