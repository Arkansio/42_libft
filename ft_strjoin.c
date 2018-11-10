/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:51:28 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/10 21:52:43 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sz1;
	int		sz2;
	char	*str;

	sz1 = ft_strlen(s1);
	sz2 = ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (sz1 + sz2 + 1))))
		return (NULL);
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	str[sz1 + sz2 + 1] = '\0';
	return (str);
}
