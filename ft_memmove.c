/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:39:20 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 22:45:51 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == s2)
		return (s1);
	if (!s1 && !s2)
		return (NULL);
	if (s1 < s2)
	{
		while (i < n)
		{
			((char *)s1)[i] = ((char *)s2)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((char *)s1)[n - 1] = ((char *)s2)[n - 1];
			n--;
		}
	}
	return (s1);
}
// int main()
// {
// 	printf ("%s",ft_memmove("dfdf","dfdf",3));
// 	//printf ("%s",memmove(,"dfdf",3));
// }