/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 20:50:40 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/07 20:54:49 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			pos;
	int				diff;

	diff = 0;
	pos = 0;
	while ((s1[pos] || s2[pos]) && pos < n)
	{
		diff += (s1[pos] - s2[pos]);
		if (diff != 0)
			return (diff);
		pos++;
	}
	return (diff);
}
