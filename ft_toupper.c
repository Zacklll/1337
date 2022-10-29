/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-wad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:29:10 by zael-wad          #+#    #+#             */
/*   Updated: 2022/10/29 16:35:44 by zael-wad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
	{
		arg -= 32;
	}
	return (arg);
}

// int main()
// {
// 	printf("%c", ft_toupper('a'));
// }