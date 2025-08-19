/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:11:44 by anakrash          #+#    #+#             */
/*   Updated: 2024/09/30 15:01:55 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// int	main(void)
// {
// 	char a = ft_isdigit('a');
// 	char b = ft_isdigit('A');
// 	char c = ft_isdigit('1');
// 	char d = ft_isdigit(' ');
// 	char e = ft_isdigit('	');
// 	char f = ft_isdigit('&');
// 	printf("%d %d %d %d %d %d ", a, b, c, d, e, f);
// }