/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:30:47 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/03/21 19:32:21 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include "limits.h"
#include <stdio.h>

int	main(void)
{
	int	std;
	int	new;
	int	r;
	int	*ptr;

	r = 0;
	new = 0;
	std = 0;
	/* ********************************************************************** */
	/* CHAR */
	new += ft_printf(">>> %i <<<\n", ft_printf("%c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | ", 'A', 'Z', 'a', 'z', 48, 57, "lol", -1, 127, NULL));
	std += printf(">>> %i <<<\n", printf("%c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | ", 'A', 'Z', 'a', 'z', 48, 57, "lol", -1, 127, NULL));
	new == std ? : r++;
	/* ********************************************************************** */

	/* ********************************************************************** */
	/* STR */
	new += ft_printf(">>> %i <<<\n", ft_printf("%s | %s | %s | %s | %s | %s | %s | %s | %s | %s | ", "A", "c", "ABCDE", "", 0, "^", "xD\0", "'\\123$%%&#@(*$&^*$@#4567890\t", "\0", NULL));
	std += printf(">>> %i <<<\n", printf("%s | %s | %s | %s | %s | %s | %s | %s | %s | %s | ", "A", "c", "ABCDE", "", 0, "^", "xD\0", "'\\123$%%&#@(*$&^*$@#4567890\t", "\0", NULL));
	new == std ? : r++;
	/* ********************************************************************** */
	
	/* ********************************************************************** */
	/* PTR */
	char	*p1 = "A";
	char	*p2 = "c";
	char	*p3 = "ABCDE";
	char	*p4 = "xD\0xD";
	char	*p5 = "'\\123$%%&#@(*$&^*$@#4567890\t";
	char	*p6 = "";
	char	*p7 = "\0";
	char	*p8 = 0;
	char	*p9 = 0x0;

	new += ft_printf(">>> %i <<<\n", ft_printf("%p | %p | %p | %p | %p | %p | %p | %p | %p | %p | %p | %p ", p1, p2, p3, p4, p5, p6, p7, p8, p9, NULL, 0xffffffffffff));
	std += printf(">>> %i <<<\n", printf("%p | %p | %p | %p | %p | %p | %p | %p | %p | %p | %p | %p ", p1, p2, p3, p4, p5, p6, p7, p8, p9, NULL, 0xffffffffffff));
	new == std ? : r++;
	/* ********************************************************************** */

	/* ********************************************************************** */
	/* INT */
	new += ft_printf(">>> %i <<<\n", ft_printf("%i | %i | %i | %i | %i | %i | %i | %i | %i | %i | %i | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	std += printf(">>> %i <<<\n", printf("%i | %i | %i | %i | %i | %i | %i | %i | %i | %i | %i | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	new == std ? : r++;
	/* ********************************************************************** */
	
	/* ********************************************************************** */
	/* UINT */
	new += ft_printf(">>> %i <<<\n", ft_printf("%u | %u | %u | %u | %u | %u | %u | %u | %u | %u | %u | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	std += printf(">>> %i <<<\n", printf("%u | %u | %u | %u | %u | %u | %u | %u | %u | %u | %u | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	new == std ? : r++;
	/* ********************************************************************** */

	/* ********************************************************************** */
	/* HEXL */
	new += ft_printf(">>> %i <<<\n", ft_printf("%x | %x | %x | %x | %x | %x | %x | %x | %x | %x | %x | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	std += printf(">>> %i <<<\n", printf("%x | %x | %x | %x | %x | %x | %x | %x | %x | %x | %x | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	new == std ? : r++;
	/* ********************************************************************** */

	/* ********************************************************************** */
	/* HEXU */
	new += ft_printf(">>> %i <<<\n", ft_printf("%X | %X | %X | %X | %X | %X | %X | %X | %X | %X | %X | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	std += printf(">>> %i <<<\n", printf("%X | %X | %X | %X | %X | %X | %X | %X | %X | %X | %X | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	new == std ? : r++;
	/* ********************************************************************** */

	/* ********************************************************************** */
	/* HASH */
	new += ft_printf(">>> %i <<<\n", ft_printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	std += printf(">>> %i <<<\n", printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	new += ft_printf(">>> %i <<<\n", ft_printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0));
	std += printf(">>> %i <<<\n", printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0));
	new += ft_printf(">>> %i <<<\n", ft_printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1));
	std += printf(">>> %i <<<\n", printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", 1, 1, 1, 1, 1, 1, 1, 1, 1, 1));
	new += ft_printf(">>> %i <<<\n", ft_printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", -1, -1, -1, -1, -1, -1, -1, -1, -1, -1));
	std += printf(">>> %i <<<\n", printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", -1, -1, -1, -1, -1, -1, -1, -1, -1, -1));
	new += ft_printf(">>> %i <<<\n", ft_printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN));
	std += printf(">>> %i <<<\n", printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#X | %#X | %#c | ", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN));
	new += ft_printf(">>> %i <<<\n", ft_printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#x | %#X | %#c | ", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX));
	std += printf(">>> %i <<<\n", printf("%#c | %#d | %#i | %#x | %#X | %#c | %#d | %#i | %#X | %#X | %#c | ", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#i%%%#i | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#i%%%#i | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#i%%%#i | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#i%%%#i | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#i%%%#i | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#i%%%#i | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#i%%%#i | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#i%%%#i | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#d | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#d | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#x | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#x | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#x | %#x | ", INT_MIN, INT_MIN));
	// std += printf(">>> %i <<<\n", printf("%#x | %#x | ", INT_MIN, INT_MIN));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#X | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#X | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#k | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#k | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#y | ", 3000));
	// std += printf(">>> %i <<<\n", printf("%#y | ", 3000));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#ctf | ", 30));
	// std += printf(">>> %i <<<\n", printf("%#ctf | ", 30));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#s | ", "ter"));
	// std += printf(">>> %i <<<\n", printf("%#s | ", "ter"));
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#x | ", 0));
	// std += printf(">>> %i <<<\n", printf("%#x | ", 0));
	new == std ? : r++;
	/* ********************************************************************** */

	/* ********************************************************************** */
	/* HEXU */
	// new += ft_printf(">>> %i <<<\n", ft_printf("%X | %X | %X | %X | %X | %X | %X | %X | %X | %X | %X | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	// std += printf(">>> %i <<<\n", printf("%X | %X | %X | %X | %X | %X | %X | %X | %X | %X | %X | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	// new == std ? : r++;
	// new += ft_printf(">>> %i <<<\n", ft_printf("%#x | ", 0));
	std += printf(">>> %i <<<\n", printf("% d | ", -500));
	std += printf(">>> %i <<<\n", printf("% d | ", 500));
	std += printf(">>> %i <<<\n", printf("%+d | ", -500));
	std += printf(">>> %i <<<\n", printf("%+d | ", 500));
	std += printf(">>> %i <<<\n", printf("% | ", 500));
	/* ********************************************************************** */

	/* ********************************************************************** */
	/* HEXU */
	// new += ft_printf(">>> %i <<<\n", ft_printf("%X | %X | %X | %X | %X | %X | %X | %X | %X | %X | %X | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	// std += printf(">>> %i <<<\n", printf("%X | %X | %X | %X | %X | %X | %X | %X | %X | %X | %X | ", 0, 1, -1, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, LLONG_MAX, LLONG_MIN, NULL));
	// new == std ? : r++;
	/* ********************************************************************** */

	ft_printf("DIFF: %d | OWN: %d | STD: %d\n", r, new, std);
	printf("DIFF: %d | OWN: %d | STD: %d\n", r, new, std);
	return (0);
}
