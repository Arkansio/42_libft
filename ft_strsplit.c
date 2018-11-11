/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:44:26 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 21:02:52 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_size(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0' || s[i] != c)
		i++;
	return (s);
}

static char		*get_next_word(char const *s, char c)
{
	int		size_word;
	char	*str;

	size_word = get_size(s, c);
	if (!(str = ft_strnew(size_word)))
		return (NULL);
	str = ft_strncpy(str, s, size_word);
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] = c)
		{
			if (get_next_word(&str[i], c))
				words++;
		}
	}
	printf("%d\n", words);
	return (NULL);
}
