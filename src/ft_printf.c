/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:28:43 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/23 16:05:29 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_init_status(t_printf_status *status)
{
	status->hash = 0;
}

int	ft_printf_flags_list(void *data, int format, const char **str,
	t_printf_status *status)
{
	if (format == '\0')
		return (0);
	else if (format == 'c')
		return (ft_printf_display_char((int)data));
	else if (format == 's')
		return (ft_printf_display_str((char *)data));
	else if (format == 'p')
		return (ft_printf_display_ptr((void *)data, 0));
	else if (format == 'd' || format == 'i')
		return (ft_printf_display_int((int)data));
	else if (format == 'u')
		return (ft_printf_display_uint((unsigned int)data));
	else if (format == 'x')
		return (ft_printf_display_hexl((int)data, status));
	else if (format == 'X')
		return (ft_printf_display_hexu((int)data, status));
	else if (format == '#')
		return (ft_printf_display_hash((void *)data, *++*str, str, status));
	else if (format == ' ')
		return (ft_printf_display_space((void *)data, *++*str, str, status));
	else if (format == '+')
		return (ft_printf_display_sign((void *)data, *++*str, str, status));
	else
		return (ft_printf_display_char(format));
}

int	ft_printf(const char *args, ...)
{
	va_list			args_list;
	t_printf_status	status;
	size_t			cc;

	ft_printf_init_status(&status);
	cc = 0;
	if (!args)
		return (cc);
	va_start(args_list, args);
	while (*args != '\0')
	{
		if (*args == '%')
			cc += ft_printf_flags_list(
					va_arg(args_list, void *), *++args, &args, &status);
		else
			cc += ft_printf_display_char(*args);
		if (*args != '\0')
			args++;
	}
	va_end(args_list);
	return (cc);
}
