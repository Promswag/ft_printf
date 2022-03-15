/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_display_ptr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:09:31 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/15 18:09:26 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_display_ptr(void *ptr)
{
	ft_putstr_fd("0x", 1);
	ft_putnbr_base_fd((unsigned long int)ptr, "0123456789abcdef", 1);
	return (ft_ullen((unsigned long int)ptr, 16) + 2);
}
