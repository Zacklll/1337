/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:49:05 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 16:45:41 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t lenth)
{
	char	*s1;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < lenth)
		lenth = ft_strlen(s) - start;
	s1 = malloc(lenth + 1);
	if (!s1)
		return (NULL);
	while (i < lenth)
	{
		s1[i] = s[start];
		i++;
		start++;
	}
	s1[i] = '\0';
	return (s1);
}
