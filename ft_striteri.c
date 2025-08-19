/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:37 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 16:21:54 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}

// void	my_func(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 	{
// 		*c = ft_toupper(*c);
// 	}
// 	else
// 	{
// 		*c = ft_tolower(*c);
// 	}
// }

// int main(void) {

//     char str1[] = "hello, world!";
//     printf("Original string: %s\n", str1);
//     ft_striteri(str1, my_func);
//     printf("Modified string: %s\n\n", str1);

//     char str2[] = "";
//     printf("Original empty string: '%s'\n", str2);
//     ft_striteri(str2, my_func);
//     printf("Modified empty string: '%s'\n\n", str2);

//     char str3[] = "     ";
//     printf("Original string with spaces: '%s'\n", str3);
//     ft_striteri(str3, my_func);
//     printf("Modified string with spaces: '%s'\n\n", str3);

//     char *str4 = NULL;
//     printf("Testing NULL input...\n");
//     ft_striteri(str4, my_func);
//     printf("NULL input handled correctly.\n\n");

//     return (0);
// }
