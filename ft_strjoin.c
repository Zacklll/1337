/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:35:00 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 16:44:51 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*casts1;
	char	*casts2;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (0);
	casts1 = (char *)s1;
	casts2 = (char *)s2;
	len1 = ft_strlen(casts1);
	len2 = ft_strlen(casts2);
	str = malloc(len1 + len2 + 1);
	if (str)
	{
		ft_memcpy(str, s1, len1);
		ft_memcpy(str + len1, s2, len2 + 1);
	}
	return (str);
}

/*int main()
{
	char	t[];
	char	b[];

    t[] = "";
    b[] = "";
    printf("%s", ft_strjoin(t,b));
}
*/