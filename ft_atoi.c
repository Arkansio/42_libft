/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 20:55:51 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/11 20:16:01 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_escape_seq(char c)
{ 
	return ((c == '\f' || c == 127)
		   	|| (c == '\t' || c == '\n'))
	   	|| ((c == '\r' || c == '\v')
			   	|| (c == '\f' || c == ' '));
}

int		ft_atoi(const char *str)
{
	int		symbol;
	int		value;

	symbol = 1;
	value = 0;
	while (ft_escape_seq(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			symbol = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = (value * 10) + (*str - 48);
		str++;
	}
	return (value * symbol);
}
