/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:38:21 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 14:25:19 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	destlenth;
	size_t	srclenth;

	i = 0;
	if (!dest && !src)
		return (0);
	if (!dest && destsize == 0)
		return (ft_strlen(src));
	destlenth = ft_strlen(dest);
	srclenth = ft_strlen(src);
	if (destsize == 0 || destlenth >= destsize)
		return (srclenth + destsize);
	while (src[i] && (i < destsize - destlenth - 1))
	{
		dest[destlenth + i] = src[i];
		i++;
	}
	dest[destlenth + i] = '\0';
	return (destlenth + srclenth);
}
