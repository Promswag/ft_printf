/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:28:43 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/10 18:12:52 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_format(char c)
{
	int		i;
	char	format[8];

	i = -1;
	format[0] = 'c';
	format[1] = 's';
	format[2] = 'p';
	format[3] = 'd';
	format[4] = 'i';
	format[5] = 'u';
	format[6] = 'x';
	format[7] = 'X';
	while (++i < 8)
		if (c == format[i])
			return (1);
	return (0);
}

int	ft_printf(const char *args, ...)
{
	va_list	arg_list;
	size_t	cc;

	cc = 0;
	if (args)
	{
		va_start(arg_list, args);
		while (*args != '\0')
		{
			if (*args != '%')
			{
				ft_putchar_fd(*args, 1);
				cc++;
			}
			else
			{
				if (is_format(*args))
				{
					
				}
				else
				{
					ft_putchar_fd(*args, 1);
					cc++;
				}
			}
			args++;
		}
		va_end(arg_list);
	}
	return (cc);
}
