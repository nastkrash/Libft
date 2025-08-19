/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:13:45 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 21:14:51 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (!s)
		return ;
	ft_memset(s, 0, n);
}
// int main()
// {
//     char str[50] = "abcdefghjklmnopqrstuvwxyz";
//     printf("\nBefore ft_bzero(): %s\n", str);
//     ft_bzero(str + 13, 8);
//     printf("After ft_bzero():  %s", str);
//     return (0);
// }