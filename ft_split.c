/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:13:04 by dkot              #+#    #+#             */
/*   Updated: 2024/10/04 16:45:33 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_substrings(const char *s, char c)
{
	size_t	count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s == c)
			in_substring = 0;
		else if (in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	ft_free_substrings(char **result)
{
	size_t	i;

	if (!result)
		return ;
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_allocate_substrings(const char *s, char c, size_t elements,
		char **result)
{
	size_t	count;
	size_t	index;

	index = 0;
	while (elements--)
	{
		while (*s == c)
			s++;
		count = 0;
		while (*s != c && *s != '\0')
		{
			count++;
			s++;
		}
		if (count > 0)
		{
			result[index] = malloc(sizeof(char) * (count + 1));
			if (!result[index++])
			{
				ft_free_substrings(result);
				return (0);
			}
		}
	}
	return (1);
}

static void	ft_add_substrings(const char *s, char c, char **result)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		j = 0;
		while (*s != c && *s != '\0')
		{
			result[i][j++] = *s++;
		}
		if (j > 0)
			result[i++][j] = '\0';
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	substring_count;
	char	**result;

	if (!s)
		return (NULL);
	substring_count = ft_count_substrings(s, c);
	result = malloc(sizeof(char *) * (substring_count + 1));
	if (!result)
		return (NULL);
	result[substring_count] = NULL;
	if (!ft_allocate_substrings(s, c, substring_count, result))
	{
		free(result);
		return (NULL);
	}
	ft_add_substrings(s, c, result);
	return (result);
}

// int	main(void)
// {
// 	char	**result;
// 	char	*str;
// 	char	delimiter;
// 	size_t	i;

// 	str = "Hello, World! This is a test.";
// 	delimiter = ' ';
// 	result = ft_split(str, delimiter);
// 	if (result)
// 	{
// 		for (i = 0; result[i]; i++)
// 		{
// 			printf("Substring %zu: '%s'\n", i, result[i]);
// 			free(result[i]);
// 		}
// 		free(result);
// 	}
// 	str = "apple,,,banana,,,orange";
// 	delimiter = ',';
// 	result = ft_split(str, delimiter);
// 	if (result)
// 	{
// 		for (i = 0; result[i]; i++)
// 		{
// 			printf("Substring %zu: '%s'\n", i, result[i]);
// 			free(result[i]);
// 		}
// 		free(result);
// 	}
// 	str = NULL;
// 	result = ft_split(str, delimiter);
// 	if (result == NULL)
// 	{
// 		printf("NULL input handled correctly.\n");
// 	}
// 	return (0);
// }
