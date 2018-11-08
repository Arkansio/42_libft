/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:57:11 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/07 20:23:06 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t pos;
	size_t pos_sub;

	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{
			pos = 0;
			pos_sub = 0;
			while (str[i + pos] == to_find[pos_sub])
			{
				pos++;
				pos_sub++;
				if (pos + 1 > ft_strlen(to_find))
					return ((char*)&str[i]);
			}
		}
		i++;
	}
	return (NULL);	
}
