/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 20:23:17 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/07 20:28:53 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int pos;
	int diff;

	diff = 0;
	pos = 0;
	while (s1[pos] || s2[pos])
	{
		diff += (s1[pos] - s2[pos]);
		if (diff != 0)
			return (diff);
		pos++;
	}
	return (diff);	
}
