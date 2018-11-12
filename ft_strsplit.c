/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:44:26 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/12 18:03:30 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include "stdlib.h"
# include "stdio.h"

static int		get_size(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char		*get_next_word(char const *s, char c)
{
	int		size_word;
	char	*str;

	size_word = get_size(s, c);
	str = NULL;
	if (!(str = ft_strnew(size_word)))
		return (NULL);
	str = ft_strncpy(str, s, size_word);
	return (str);
}

int				ft_count_words(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			i += get_size(&s[i], c);
			words++;
		}
		else
			i++;
	}
	if (s[i - 1] == c)
		words++;
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		words;
	char	**tab;
	int		i_tab;

	i_tab = 0;
	words = ft_count_words(s, c);
	printf("words %d\n",  words);
	if (!(tab = malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tab[i_tab] = get_next_word(&s[i], c);
			i_tab++;
			i += get_size(&s[i], c);
		}
		else
			i++;
	}
	if (s[i - 1] == c)
		tab[i_tab++] = NULL;
	if (!(tab[i_tab] = malloc(sizeof(char))))
		return (NULL);
	tab[i_tab][0] = '\0';
	return (tab);
}
