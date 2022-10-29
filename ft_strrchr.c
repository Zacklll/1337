/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:49:40 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 16:45:34 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int arg)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	while (len >= 0)
	{
		if (str[len] == (unsigned char)arg)
			return ((char *)str + len);
		if (len == 0)
			break ;
		len--;
	}
	return (NULL);
}
