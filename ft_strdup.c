/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:28:59 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/08 17:29:04 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char    *strcpy;
	size_t     i;

	i = 0;
	while (s1[i])
		i++;
	strcpy = (char*)malloc(sizeof(*strcpy) * i + 1);
	if (!strcpy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strcpy[i] = s1[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
