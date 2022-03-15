/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_display_hexu.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:12:46 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/15 18:13:55 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_display_hexu(unsigned int n)
{
	ft_putnbr_base_fd(n, "0123456789ABCDEF", 1);
	return (ft_ullen(n, 16));
}
