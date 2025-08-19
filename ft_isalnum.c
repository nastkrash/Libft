/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:15:14 by anakrash          #+#    #+#             */
/*   Updated: 2024/09/30 15:01:39 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
// int	main(void)
// {
// 	char a = ft_isalnum('a');
// 	char b = ft_isalnum('A');
// 	char c = ft_isalnum('1');
// 	char d = ft_isalnum(' ');
// 	char e = ft_isalnum('	');
// 	char f = ft_isalnum('&');
// 	printf("%d %d %d %d %d %d ", a, b, c, d, e, f);
// }