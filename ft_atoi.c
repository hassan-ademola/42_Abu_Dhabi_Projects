/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 03:17:31 by hademola          #+#    #+#             */
/*   Updated: 2022/08/20 23:15:13 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c == '\t') || (c == '\n') || (c == '\v') || \
	(c == '\f') || (c == '\r') || (c == ' '))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	value;

	sign = 1;
	value = 0;
	while (ft_isspace(*str))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		sign = sign - (2 * (*str == '-'));
		str++;
	}	
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str - '0');
		if ((value * sign) > 0 && sign == -1)
			return (0);
		if ((value * sign) < 0 && sign == 1)
			return (-1);
		str++;
	}
	return ((int)(sign * value));
}
