/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:04:36 by anakrash          #+#    #+#             */
/*   Updated: 2024/09/30 15:01:46 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char a = ft_isalpha('a');
// 	char b = ft_isalpha('A');
// 	char c = ft_isalpha('1');
// 	char d = ft_isalpha(' ');
// 	char e = ft_isalpha('	');
// 	char f = ft_isalpha('&');
// 	printf("%d %d %d %d %d %d ", a, b, c, d, e, f);
// }