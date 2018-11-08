/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:46:07 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/08 17:30:48 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void* mem;

	if (size == 0)
		return (NULL);
	mem = NULL;
	if (malloc(size) == NULL)
		mem = NULL;
	return (mem);
}
