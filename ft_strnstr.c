/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:57:11 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/12 01:17:41 by arkansio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int			sz;
	size_t		i;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	sz = ft_strlen(to_find);
	while (*str != '\0' && len--)
	{
		if (ft_strncmp(str, to_find, sz) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
