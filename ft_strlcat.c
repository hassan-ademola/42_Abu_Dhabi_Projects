/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:44:12 by hademola          #+#    #+#             */
/*   Updated: 2022/08/22 18:43:41 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	last;
	size_t	init;
	int		i;

	i = 0;
	last = ft_strlen(dst);
	if (ft_strlen(dst) > dstsize || dstsize == 0)
	{
		init = dstsize;
		return (init + ft_strlen(src));
	}
	init = ft_strlen(dst);
	while ((last < (dstsize - 1)) && src[i] != '\0')
	{
		dst[last] = src[i];
		last++;
		i++;
	}
	dst[last] = '\0';
	return (init + ft_strlen(src));
}

