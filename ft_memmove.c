/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:11:43 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/07 15:18:48 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char* tdst;
	unsigned char* tsrc;

	tdst = (unsigned char*)dst;
	tsrc = (unsigned char*)tsrc;
	i = 0;
	while (i < len)
	{
		tdst[i] = tsrc[i];

		i++;
	}
}
