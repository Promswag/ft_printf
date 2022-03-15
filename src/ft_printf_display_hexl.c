/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_display_hexl.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:13:24 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/15 18:13:51 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_display_hexl(unsigned int n)
{
	ft_putnbr_base_fd(n, "0123456789abcdef", 1);
	return (ft_ullen(n, 16));
}
