/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:53:04 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 20:45:36 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *find, const char *tofind, size_t n)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*str2;

	str1 = (char *)tofind;
	str2 = (char *)find;
	i = 0;
	j = 0;
	if (str1[0] == '\0')
		return (str2);
	if (!str2 && n == 0)
		return (0);
	while (str2[i] != '\0')
	{
		while (str2[i + j] == str1[j] && (i + j) < n)
		{
			j++;
			if (str1[j] == '\0')
				return (&str2[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
