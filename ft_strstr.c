/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:34:48 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/10 01:46:17 by arkansio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *str, const char *to_find)
{
	int i;
	size_t pos;
	size_t pos_sub;

	i = 0;	
	while (str[i] != '\0')
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
