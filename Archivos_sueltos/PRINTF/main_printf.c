/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaojeda- <jaojeda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:54:45 by jaojeda-          #+#    #+#             */
/*   Updated: 2025/05/16 21:54:56 by jaojeda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>      // printf original
#include "ft_printf.h"  // tu función personalizada
int main(void)
{
	int x = 42;
	int my_count, real_count;
	// 1. %c
	my_count = ft_printf("ft_printf:   %%c -> [%c]\n", 'A');
	real_count = printf("printf:      %%c -> [%c]\n", 'A');
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 2. %s
	my_count = ft_printf("ft_printf:   %%s -> [%s]\n", "Hola mundo");
	real_count = printf("printf:      %%s -> [%s]\n", "Hola mundo");
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 3. %s con NULL
	my_count = ft_printf("ft_printf:   %%s (NULL) -> [%s]\n", (char *)NULL);
	real_count = printf("printf:      %%s (NULL) -> [%s]\n", (char *)NULL);
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 4. %p
	my_count = ft_printf("ft_printf:   %%p -> [%p]\n", &x);
	real_count = printf("printf:      %%p -> [%p]\n", &x);
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 5. %d
	my_count = ft_printf("ft_printf:   %%d -> [%d]\n", -12345);
	real_count = printf("printf:      %%d -> [%d]\n", -12345);
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 6. %i
	my_count = ft_printf("ft_printf:   %%i -> [%i]\n", 6789);
	real_count = printf("printf:      %%i -> [%i]\n", 6789);
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 7. %u
	my_count = ft_printf("ft_printf:   %%u -> [%u]\n", 4294967295U);
	real_count = printf("printf:      %%u -> [%u]\n", 4294967295U);
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 8. %x
	my_count = ft_printf("ft_printf:   %%x -> [%x]\n", 305441741);
	real_count = printf("printf:      %%x -> [%x]\n", 305441741);
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 9. %X
	my_count = ft_printf("ft_printf:   %%X -> [%X]\n", 305441741);
	real_count = printf("printf:      %%X -> [%X]\n", 305441741);
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 10. %%
	my_count = ft_printf("ft_printf:   %%%% -> [%%]\n");
	real_count = printf("printf:      %%%% -> [%%]\n");
	printf("Return values: ft_printf = %d, printf = %d\n\n", my_count, real_count);
	// 11. Todo junto
	my_count = ft_printf("printf:      ALL -> [%c] [%s] [%p] [%d] [%u] [%x] [%X] [%%]\n",
						'Z', "Test", &x, -42, 42U, 0x123abc, 0x123abc);
	real_count = printf("printf:      ALL -> [%c] [%s] [%p] [%d] [%u] [%x] [%X] [%%]\n",
						'Z', "Test", &x, -42, 42U, 0x123abc, 0x123abc);
	printf("Return values: ft_printf = %d, printf = %d\n", my_count, real_count);
	return 0;
}