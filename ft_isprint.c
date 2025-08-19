/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:30:19 by anakrash          #+#    #+#             */
/*   Updated: 2024/09/30 15:02:00 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	char a = ft_isprint('a');
// 	char b = ft_isprint('A');
// 	char c = ft_isprint('1');
// 	char d = ft_isprint(' ');
// 	char e = ft_isprint('	');
// 	char f = ft_isprint('&');
// 	printf("%d %d %d %d %d %d ", a, b, c, d, e, f);
// }