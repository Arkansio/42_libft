/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:58:55 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/10 02:54:25 by arkansio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	int		i;
	int		pos_src;

	i = 0;
	while (dest[i] != '\0')
		i++;
	pos_src = 0;
	while (src[pos_src])
	{
		dest[i] = src[pos_src];
		pos_src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
