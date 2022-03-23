/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_display_space.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:10:49 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/23 18:32:04 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_display_space(void *data, char c, const char **str,
	t_printf_status *pf_status)
{
	if (c == 'd' || c == 'i')
	{
		if ((int)data < 0)
			return (ft_printf_display_int((int)data));
		else
		{
			ft_putstr_fd(" ", 1);
			return (ft_printf_display_int((int)data) + 1);
		}
	}
	else
		return (ft_printf_flags_list(data, c, str, pf_status));
}
