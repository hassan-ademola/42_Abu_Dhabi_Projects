/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 23:27:22 by hademola          #+#    #+#             */
/*   Updated: 2022/08/20 21:23:41 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_n_digits(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	int		neg;

	len = get_n_digits(n);
	neg = n < 0;
	s = (char *)malloc(sizeof(*s) * (len + neg + 1));
	if (n == INT32_MIN)
		return (ft_memcpy(s, "-2147483648", (len + neg + 1)));
	if (s)
	{
		if (neg)
		{
			s[0] = '-';
			n *= -1;
		}
		s[(len + neg)] = '\0';
		while (len > 0)
		{
			s[(len + neg) - 1] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	return (s);
}
