/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:06:49 by rparise           #+#    #+#             */
/*   Updated: 2025/05/14 17:06:22 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

/* #include <stdio.h>

void	ft_ultimat_div_mod(int *a, int *b);

int	main(void)
{
	int	x = 20;
	int	y = 6;

	printf("Before: x = %d, y = %d\n", x, y);
	ft_div_mod(&x, &y);
	printf("After: x (quotient) = %d, y (remainder) = %d\n", x, y);

	return (0);
} */