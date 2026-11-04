/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojadiri <sojadiri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:13:10 by sojadiri          #+#    #+#             */
/*   Updated: 2026/10/30 17:17:13 by sojadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*s)
	{
		if (*s == (char )c)
			last_pos = (char *)s;
		s++;
	}
	if ((char )c == '\0')
		last_pos = (char *)s;
	return (last_pos);
}
