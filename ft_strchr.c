/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:03:48 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 00:27:26 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
// int main()
//{
//     const char *str = "Hello, World!";
//     char to_find_1 = 'W';
//     char to_find_2 = 'x';
//     char to_find_null = '\0';
//     char *result = ft_strchr(str, to_find_1);
//     if (result) {
//         printf("Found '%c' at position: %ld\n", to_find_1, result - str);
//     } else {
//         printf("Character '%c' not found in string.\n", to_find_1);
//     }
//     result = ft_strchr(str, to_find_2);
//     if (result) {
//         printf("Found '%c' at position: %ld\n", to_find_2, result- str);
//     }
//		else {
//         printf("Character '%c' not found in string.\n", to_find_2);
//     }
//     result = ft_strchr(str, to_find_null);
//     if (result) {
//         printf("Found null terminator at position: %ld\n", result - str);
//     } else {
//         printf("Null terminator not found in string.\n");
//     }
//     return (0);
// }