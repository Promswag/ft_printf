/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_display_conv.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:22:41 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/21 19:17:42 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_display_conv_hex(void *n, int format)
{
	if (format)
	{
		ft_putstr_fd("0X", 1);
		ft_putnbr_base_fd((unsigned int)n, "0123456789ABCDEF", 1);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		ft_putnbr_base_fd((unsigned int)n, "0123456789abcdef", 1);
	}
	return (ft_ullen((unsigned int)n, 16) + 2);
}

int	ft_printf_display_conv(void *n, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_printf_display_int((int)n));
	else if ((int)n == 0 && (c == 'x' || c == 'X'))
		return (ft_printf_display_char('0'));
	else if (c == 'x')
		return (ft_printf_display_conv_hex(n, LOWERCASE));
	else if (c == 'X')
		return (ft_printf_display_conv_hex(n, UPPERCASE));
	else if (c == 'c')
		return (ft_printf_display_char((int)n));
	else if (c == 's')
		return (ft_printf_display_str((char *)n));
	else
		return (ft_printf_display_char(c));
}
