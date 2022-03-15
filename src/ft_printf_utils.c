/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:36:13 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/15 18:09:54 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_nblen(int number, int base)
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

size_t	ft_ullen(unsigned long int number, unsigned long int base)
{
	int	len;

	len = 1;
	while (number >= base)
	{
		number /= base;
		len++;
	}
	return (len);
}

void	ft_putnbr_base_fd(unsigned long int n, char *base, int fd)
{
	size_t	size;

	size = ft_strlen(base);
	if (n > size - 1)
		ft_putnbr_base_fd((n / size), base, fd);
	ft_putchar_fd(base[n % size], fd);
}
