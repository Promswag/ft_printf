/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_display_hash.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:22:41 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/23 17:38:17 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_display_hash(void *data, char c, const char **str,
	t_printf_status *pf_status)
{
	if (c == 'x' || c == 'X')
	{
		if ((int)data == 0)
			return (ft_printf_display_char('0'));
		if (c == 'x')
		{
			ft_putstr_fd("0x", 1);
			ft_putnbr_base_fd((unsigned int)data, "0123456789abcdef", 1);
		}
		else
		{
			ft_putstr_fd("0X", 1);
			ft_putnbr_base_fd((unsigned int)data, "0123456789ABCDEF", 1);
		}
		return (ft_ullen((unsigned int)data, 16) + 2);
	}
	else
	{
		pf_status->hash = 1;
		return (ft_printf_flags_list(data, c, str, pf_status));
	}
}
