/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:06:27 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/31 20:19:08 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *st, int arg, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)(st))[i] = (unsigned char)arg;
		i++;
	}
	return (st);
}
