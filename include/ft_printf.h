/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:23:51 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/23 18:32:31 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_printf_status {
	int	hash;
}		t_printf_status;

//ft_printf
int		ft_printf(const char *args, ...);
int		ft_printf_flags_list(void *data, int format, const char **str,
			t_printf_status *status);
int		ft_printf_display_char(int c);
int		ft_printf_display_str(char *str);
int		ft_printf_display_ptr(void *ptr, int format);
int		ft_printf_display_int(int n);
int		ft_printf_display_uint(unsigned long int n);
int		ft_printf_display_hexl(unsigned int n, t_printf_status *status);
int		ft_printf_display_hexu(unsigned int n, t_printf_status *status);
int		ft_printf_display_hash(void *data, char c, const char **str,
			t_printf_status *status);
int		ft_printf_display_space(void *data, char c, const char **str,
			t_printf_status *status);
int		ft_printf_display_sign(void *data, char c, const char **str,
			t_printf_status *status);

//libft
size_t	ft_strlen(const char *s);
size_t	ft_nblen(int n, int base);
size_t	ft_ullen(unsigned long int n, unsigned long int base);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base_fd(unsigned long int n, char *base, int fd);
void	ft_print_uint_fd(unsigned int n, int fd);

#endif