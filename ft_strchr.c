/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 03:15:22 by hademola          #+#    #+#             */
/*   Updated: 2022/08/22 17:40:38 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int		i;
	char	*p;

	p = 0;
	i = 0;
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			p = &str[i];
			break ;
		}
		if (str[i] == '\0')
			break ;
		i++;
	}
	return (p);
}
