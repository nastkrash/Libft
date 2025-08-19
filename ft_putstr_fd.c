/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:28 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 15:16:38 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
// int main(void)
// {
//     char *str1 = "Hello, World!";
//     char *str2 = NULL;
//     char *str3 = "";

//     printf("Test case 1: Valid string to stdout\n");
//     ft_putstr_fd(str1, 1);
//     write(1, "\n", 1);

//     printf("Test case 2: NULL string\n");
//     ft_putstr_fd(str2, 1);

//     printf("Test case 3: Empty string\n");
//     ft_putstr_fd(str3, 1);

//     printf("Test case 4: Invalid file descriptor\n");
//     ft_putstr_fd(str1, -1);

//     return (0);
// }