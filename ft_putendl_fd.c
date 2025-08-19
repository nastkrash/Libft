/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:22 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 15:22:41 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main(void)
// {
//     char *str1 = "Hello, World!";
//     char *str2 = NULL;
//     char *str3 = "";

//     printf("Test case 1: Valid string to stdout\n");
//     ft_putendl_fd(str1, 1);

//     printf("Test case 2: NULL string\n");
//     ft_putendl_fd(str2, 1);

//     printf("Test case 3: Empty string\n");
//     ft_putendl_fd(str3, 1);

//     printf("Test case 4: Invalid file descriptor\n");
//     ft_putendl_fd(str1, -1);

//     return (0);
// }