/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:20:43 by anakrash          #+#    #+#             */
/*   Updated: 2024/09/30 15:01:50 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char a = ft_isascii('a');
// 	char b = ft_isascii('A');
// 	char c = ft_isascii('1');
// 	char d = ft_isascii(' ');
// 	char e = ft_isascii('	');
// 	char f = ft_isascii('&');
// 	printf("%d %d %d %d %d %d ", a, b, c, d, e, f);
// }