/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:10:49 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 14:59:10 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// static char	my_function(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (ft_toupper(c));
// 	else
// 		return (ft_tolower(c));
// }

// int main(void)
// {
//     char *str = "Hello, World!";
//     char *result;

//     result = ft_strmapi(str, my_function);
//     if (result)
//     {
//         printf("Original string: %s\n", str);
//         printf("Transformed string: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     result = ft_strmapi(NULL, my_function);
//     if (result == NULL)
//     {
//         printf("NULL input handled correctly.\n");
//     }

//     str = "";
//     result = ft_strmapi(str, my_function);
//     if (result)
//     {
//         printf("Transformed empty string: '%s'\n", result);
//         free(result);
//     }

//     return (0);
// }
