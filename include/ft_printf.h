/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:23:51 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/15 18:15:42 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

//ft_printf
int		ft_printf(const char *args, ...);
int		ft_printf_display_char(int c);
int		ft_printf_display_str(char *str);
int		ft_printf_display_ptr(void *ptr);
int		ft_printf_display_int(int n);
int		ft_printf_display_uint(unsigned int n);
int		ft_printf_display_hexl(unsigned int n);
int		ft_printf_display_hexu(unsigned int n);

//libft
size_t	ft_strlen(const char *s);
size_t	ft_nblen(int number, int base);
size_t	ft_ullen(unsigned long int number, unsigned long int base);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base_fd(unsigned long int n, char *base, int fd);

#endif