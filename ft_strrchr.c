/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:28:17 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 00:25:35 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*last;
	unsigned char	uc;

	if (!s)
		return (NULL);
	last = NULL;
	i = 0;
	uc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == (char)uc)
			last = (char *)&s[i];
		i++;
	}
	if (uc == '\0')
		return ((char *)&s[i]);
	return (last);
}
// int main() {
//     const char *str = "Hello, World!";
//     char to_find = 'o';
//     char to_find_not_in_str = 'x';
//     char to_find_null = '\0';
//
//     char *result = ft_strrchr(str, to_find);
//     if (result) {
//         printf("Last occurrence of '%c': %s\n", to_find, result);
//     } else {
//         printf("Character '%c' not found in string.\n", to_find);
//     }
//
//     result = ft_strrchr(str, to_find_not_in_str);
//     if (result) {
//         printf("Last occurrence of '%c': %s\n", to_find_not_in_str, result);
//     } else {
//         printf("Character '%c' not found in string.\n", to_find_not_in_str);
//     }
//
//     result = ft_strrchr(str, to_find_null);
//     if (result) {
//         printf("Found null terminator at position: %ld\n", result - str);
//     } else {
//         printf("Null terminator not found in string.\n");
//     }
//     return (0);
// }
