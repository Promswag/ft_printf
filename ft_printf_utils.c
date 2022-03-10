/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:36:13 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/10 17:30:29 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_nblen(int number, int base)
{
	int	len;

	len = 1;
	if (number < 0)
		len++;
	while (number >= base || number <= -base)
	{
		number /= base;
		len++;
	}
	return (len);
}

int	ft_scale(int number, int base)
{
	int	scale;

	scale = 1;
	while (number >= base || number <= -base)
	{
		scale *= base;
		number /= base;
	}
	return (scale);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	scale;

	scale = ft_scale(n, 10);
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (scale != 0)
	{
		if (n >= 0)
			ft_putchar_fd(n / scale + 48, fd);
		else
			ft_putchar_fd(-(n / scale) + 48, fd);
		n %= scale;
		scale /= 10;
	}
}
