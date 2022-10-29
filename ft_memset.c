/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:06:27 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 22:20:21 by zael-wad         ###   ########.fr       */
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

//it take a char and replace it in the string 
// in case of int it changes in bytes so the result it will be random	
// int main()
// {
	/*int	tab[];
	//char s1[] = "abc";
	//char s2 = '+';
	tab[] = {1, 2, 3, 5};
	ft_memset(tab, 1, 6);
	// 00000001 00000000 00000000 00000000 | 00000001 00000000  00000001 00000010
	// 00000000 00000000 00000010 00000010  
	printf("%d - %d", tab[0], tab[1]);*/
// 	char j[] = "hello";
// 000000007 0000000/ 0000007 00000007
// 	ft_memset(j,'a',90);	
// }