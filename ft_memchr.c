/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:52:18 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/09 17:56:39 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char* str;

	str = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void*)&str[i]);
		i++;
	}
	return (NULL);
}
