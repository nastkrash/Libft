/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:13:50 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/02 22:06:50 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	if (s == NULL || n == 0)
	{
		return (NULL);
	}
	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char str[] = "Hello World!";
//     char *result = ft_memchr(str, 'o', sizeof(str));
//     if (result != NULL)
//         printf("Found character: %c\n", *result);
//     else
//         printf("Character 'o' not found\n");
//     result = ft_memchr(str, '\0', sizeof(str));
//     if (result != NULL)
//         printf("Found null character \\0\n");
//     else
//         printf("Null character not found\n");
//     result = ft_memchr(str, 'x', sizeof(str));
//     if (result != NULL)
//         printf("Found character: %c\n", *result);
//     else
//         printf("Character 'x' not found\n");

//     return (0);
// }
