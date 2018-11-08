/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 20:55:51 by mgessa            #+#    #+#             */
/*   Updated: 2018/11/07 21:06:19 by mgessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_atoi_boucle(const char *str, int i, int *value)
{
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			*value = (*value * 10) + (str[i] - 48);
			i++;
		}
		else
			return ;
	}
}


int		ft_atoi(const char *str)
{
	int i;
	int value;
	int pos;
	int already;

	pos = 1;
	value = 0;
	i = 0;
	already = 0;
	while (str[i] < '!')
		i++;
	if (str[i] == '-')
	{
		pos = -1;
		i++;
		already = 1;
	}
	if (str[i] == '+')
	{
		if (already == 1)
			return (value);
		i++;
	}
	ft_atoi_boucle(str, i, &value);
	return (value * pos);
}
