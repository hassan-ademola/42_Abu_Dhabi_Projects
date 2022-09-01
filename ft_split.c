/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:58:27 by hademola          #+#    #+#             */
/*   Updated: 2022/08/23 05:27:05 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_arr_len(char const *s, char c);
static int	max_strlen(char const *s, char c);
static void	fill_subarray(char *dest, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	int		j;
	char	**arr;

	if (s == NULL)
		return (0);
	arr_len = get_arr_len(s, c);
	j = 0;
	arr = (char **)malloc(sizeof(*arr) * (arr_len + 1));
	if (arr)
	{
		while (j < arr_len)
		{
			arr[j] = (char *)malloc(sizeof(*arr[j]) * (max_strlen(s, c) + 1));
			if (arr[j])
			{	
				fill_subarray(arr[j], s, c);
			}
			j++;
		}
		arr[j] = 0;
	}
	return (arr);
}

static int	get_arr_len(char const *s, char c)
{
	int	i;
	int	arr_len;
	int	enc;

	i = 0;
	arr_len = 0;
	enc = 0;
	while (s[i])
	{
		if (s[i] != c && !enc)
		{
			arr_len++;
			enc = 1;
		}
		if (s[i] == c)
			enc = 0;
		i++;
	}
	return (arr_len);
}

static int	max_strlen(char const *s, char c)
{
	int	i;
	int	len;
	int	max;

	i = 0;
	len = 0;
	max = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (len > max)
				max = len;
			len = 0;
			while (s[i] == c)
				i++;
			continue ;
		}
		len++;
		i++;
	}
	if (max == 0)
		return (len);
	return (max);
}

static void	fill_subarray(char *dest, char const *s, char c)
{
	static int	i = 0;
	int			k;

	k = 0;
	while (s[i] == c)
		i++;
	while ((s[i] != c) & (s[i] != '\0'))
	{
		dest[k] = s[i];
		i++;
		k++;
	}
	dest[k] = '\0';
}


int main()
{
	char **tab;
	int i;

	i = -1;
	char *splitme = strdup("--1-2--3---4----5-----42");
	tab = ft_split(splitme, '-');
	printf("%d\n",strcmp(tab[5], "42"));
	while(tab[++i])
		printf("<%s>\n", tab[i]);
	i = -1;
	while(tab[++i])
		free(tab[i]);
	free(tab);
}