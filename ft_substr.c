/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:58:34 by hademola          #+#    #+#             */
/*   Updated: 2022/08/22 23:28:08 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return (0);
	if (len > str_len)
		len = str_len;
	sub = (char *)malloc(sizeof(*sub) * (len + 1));
	if (start > str_len)
		start = str_len;
	if (sub)
	{
		while ((i < len) && (s[start + i] != '\0'))
		{
			sub[i] = s[start + i];
			i++;
		}
		sub[i] = '\0';
		return (sub);
	}
	return (0);
}
