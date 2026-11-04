/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojadiri <sojadiri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:04:20 by sojadiri          #+#    #+#             */
/*   Updated: 2026/10/27 17:16:23 by sojadiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_fill_str(char *str, long nbr, size_t len, int is_neg)
{
	str[len + is_neg] = '\0';
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len + is_neg] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nbr;
	int		is_neg;
	char	*str;

	nbr = n;
	is_neg = 0;
	if (nbr < 0)
	{
		is_neg = 1;
		nbr = -nbr;
	}
	len = ft_get_len(nbr);
	str = malloc(sizeof(char) * (len + is_neg + 1));
	if (str == NULL)
		return (NULL);
	return (ft_fill_str(str, nbr, len, is_neg));
}
