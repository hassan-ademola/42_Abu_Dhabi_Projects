/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:58:55 by hademola          #+#    #+#             */
/*   Updated: 2022/08/17 23:07:19 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr((char *)set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr((char *)set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
