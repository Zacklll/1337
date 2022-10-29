/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:30:07 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 16:33:35 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ag)
{
	if ((ag >= 'a' && ag <= 'z') || (ag >= 'A' && ag <= 'Z') || (ag >= '0'
			&& ag <= '9'))
	{
		return (1);
	}
	return (0);
}
