/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:30:18 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/31 17:40:57 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ntimes, size_t size)
{
	size_t	i;
	char	*s1;

	i = 0;
	if (size && ntimes >= SIZE_MAX / size)
		return (0);
	s1 = malloc(ntimes * size);
	if (!s1)
		return (NULL);
	s1 = ft_memset(s1, 0, size * ntimes);
	return (s1);
}
