/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojadiri <sojadiri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:08:46 by sojadiri          #+#    #+#             */
/*   Updated: 2026/10/21 11:11:54 by sojadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_len(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	ft_free_arr(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
}

static char	**ft_fill_arr(const char *s, char **arr, size_t arr_len, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < arr_len)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		arr[i] = ft_substr(s, 0, len);
		s = s + len;
		if (arr[i] == NULL)
		{
			ft_free_arr(arr, i);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	arr_len;
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr_len = ft_get_len(s, c);
	arr = malloc(sizeof(char *) * (arr_len + 1));
	if (arr == NULL)
		return (NULL);
	arr = ft_fill_arr(s, arr, arr_len, c);
	return (arr);
}
