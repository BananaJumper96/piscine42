/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:32:08 by rparise           #+#    #+#             */
/*   Updated: 2025/05/19 16:02:21 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	x = 3;
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x += 2;
	}
	return (1);
}

/* #include <stdio.h>

int main()
{
    int result;

    result = ft_is_prime(__INT_MAX__);
    printf("Is Int Max a prime number? %d\n", result);

    result = ft_is_prime(7);
    printf("7 a prime number? %d\n", result);

    result = ft_is_prime(5);
    printf("5 a prime number? %d\n", result);

    result = ft_is_prime(1);
    printf("1 a prime number? %d\n", result);

	result = ft_is_prime(9);
    printf("9 a prime number? %d\n", result);

    return 0;
} */
