/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:53:47 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 16:46:30 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_search(char find, char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == find)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*st;
	int		i;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen((char *)s1);
	j = len - 1;
	while (((char *)s1)[i] && to_search(((char *)s1)[i], (char *)set))
		i++;
	while (((char *)s1)[j] && to_search(((char *)s1)[j], (char *)set))
		j--;
	st = ft_substr(s1, i, j - i + 1);
	if (!st)
		return (0);
	return (st);
}
