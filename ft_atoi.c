/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:22:34 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/30 18:32:56 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *at)
{
	int				i;
	unsigned long	result;
	int				sig;

	i = 0;
	sig = 1;
	result = 0;
	while ((at[i] >= 9 && at[i] <= 13) || (at[i] == 32))
		i++;
	if (at[i] == '+' || at[i] == '-')
	{
		if (at[i] == '-')
			sig *= -1;
		i++;
	}
	while (at[i] >= '0' && at[i] <= '9')
	{
		result = result * 10 + at[i] - '0';
		if (result >= 9223372036854775807 && sig == 1)
			return (-1);
		else if (result > 9223372036854775807 && sig == -1)
			return (0);
		i++;
	}
	return (sig * result);
}
