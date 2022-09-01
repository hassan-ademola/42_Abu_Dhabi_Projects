/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 06:14:29 by hademola          #+#    #+#             */
/*   Updated: 2022/08/20 23:26:50 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*append(char *dst, char const *src, int start)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[start] = src[i];
		i++;
		start++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len;
	int		j;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	j = 0;
	s3 = (char *)malloc(sizeof(*s3) * (len + 1));
	if (s3)
	{
		s3 = append(s3, s1, j);
		j = ft_strlen(s1);
		s3 = append(s3, s2, j);
		s3[len] = '\0';
	}
	return (s3);
}
