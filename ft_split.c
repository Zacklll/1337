/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:26:19 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 22:30:29 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s2, char c)
{
	int	k;
	int	count;

	count = 0;
	k = 0;
	while (s2[k])
	{
		while (s2[k] == c)
			k++;
		if (s2[k] != c && s2[k])
			count++;
		while (s2[k] != c && s2[k])
			k++;
	}
	return (count);
}

static int	wdcount(char const *s2, char c, int i)
{
	int	j;

	j = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

static char	**sto(char const *st, char **str, char c)
{
	int	count;
	int	i;
	int	k;

	k = 0;
	i = 0;
	if (!st)
		return (0);
	count = ft_count(st, c);
	str = malloc((count + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (st[i])
	{
		while (st[i] == c)
			i++;
		if (st[i] != c && st[i])
			str[k] = malloc(wdcount(st, c, i) + 1);
		if (!str)
			return (0);
		while (st[i] != c && st[i])
			i++;
		k++;
	}
	return (str);
}

static char	**cpy(char const *st, char **str, char c)
{
	int	k;
	int	i;
	int	j;

	k = 0;
	j = 0;
	i = 0;
	while (st[i])
	{
		while (st[i] == c && st[i])
			i++;
		while (st[i] != c && st[i])
		{
			str[k][j] = st[i];
			i++;
			j++;
		}
		if (st[i] == c || (st[i] == '\0' && st[i - 1] != c))
			str[k++][j] = '\0';
		j = 0;
	}
	str[k] = 0;
	return (str);
}

char	**ft_split(char const *st, char c)
{
	int		i;
	char	**str;
	int		k;

	str = NULL;
	k = 0;
	i = 0;
	if (!st)
		return (0);
	str = sto(st, str, c);
	if (!str)
	{
		return (0);
		while (str[k] != 0)
		{
			free(str[k]);
			k++;
		}
		free(str);
	}
	str = cpy(st, str, c);
	return (str);
}
// int main() {
//   char **p = ft_split("+++++", '+');
//   printf("%s",p[0]);
//   return 0;
// }