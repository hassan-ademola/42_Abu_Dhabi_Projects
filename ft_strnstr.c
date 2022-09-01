/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:29:43 by hademola          #+#    #+#             */
/*   Updated: 2022/08/22 18:08:15 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return ((char *)haystack);
	}
	while ((haystack[i] != '\0') & (i < len))
	{
		while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
		{
			if ((i + j < len))
				j++;
			else
				break ;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (0);
}
