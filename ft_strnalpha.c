/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:09:46 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/15 14:12:04 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnalpha(char *str, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (!ft_isalpha(str[i]))
			return (0);
		n++;
	}
	return (1);
}
