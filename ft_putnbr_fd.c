/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hademola <hademola@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:20:43 by hademola          #+#    #+#             */
/*   Updated: 2022/08/17 23:38:31 by hademola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	x;

	x = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = n * (-1);
	}
	if (x > 9)
		ft_putnbr_fd(x / 10, fd);
	ft_putchar_fd((x % 10 + '0'), fd);
}
