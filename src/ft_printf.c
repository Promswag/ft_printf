/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:28:43 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/21 19:12:16 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_format_list(va_list *args_list, int format, const char **str)
{
	if (format == 'c')
		return (ft_printf_display_char(va_arg(*args_list, int)));
	else if (format == 's')
		return (ft_printf_display_str(va_arg(*args_list, char *)));
	else if (format == 'p')
		return (ft_printf_display_ptr(va_arg(*args_list, void *), LOWERCASE));
	else if (format == 'd' || format == 'i')
		return (ft_printf_display_int(va_arg(*args_list, int)));
	else if (format == 'u')
		return (ft_printf_display_uint(va_arg(*args_list, unsigned int)));
	else if (format == 'x')
		return (ft_printf_display_hexl(va_arg(*args_list, int)));
	else if (format == 'X')
		return (ft_printf_display_hexu(va_arg(*args_list, int)));
	else if (format == '#')
		return (ft_printf_display_conv(va_arg(*args_list, void *), *++*str));
	else if (format == ' ')
		return (ft_printf_display_str(va_arg(*args_list, char *)));
	else if (format == '+')
		return (ft_printf_display_str(va_arg(*args_list, char *)));
	else
		return (ft_printf_display_char(format));
}

int	ft_printf(const char *args, ...)
{
	va_list	args_list;
	size_t	cc;

	cc = 0;
	if (args)
	{
		va_start(args_list, args);
		while (*args != '\0')
		{
			if (*args == '%')
			{
				args++;
				cc += ft_printf_format_list(&args_list, *args, &args);
			}
			else
				cc += ft_printf_display_char(*args);
			args++;
		}
		va_end(args_list);
	}
	return (cc);
}
