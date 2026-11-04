/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojadiri <sojadiri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:05:41 by sojadiri          #+#    #+#             */
/*   Updated: 2026/10/31 11:26:58 by sojadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = (unsigned char *) dest;
	p_src = (const unsigned char *) src;
	if (p_src > p_dest)
	{
		ft_memcpy(dest, src, n);
	}
	else if (p_dest > p_src)
	{
		while (n--)
			p_dest[n] = p_src[n];
	}
	return (dest);
}
