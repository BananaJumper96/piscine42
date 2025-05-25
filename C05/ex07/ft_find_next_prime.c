/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:46:54 by rparise           #+#    #+#             */
/*   Updated: 2025/05/19 16:01:10 by rparise          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/* #include <stdio.h>

int main()
{
    int result;

    result = ft_find_next_prime(19);
    printf("The prime number after 19 is %d\n", result);

    result = ft_find_next_prime(27);
    printf("he prime number after 27 is %d\n", result);

    result = ft_find_next_prime(30);
    printf("he prime number after 30 is %d\n", result);

    result = ft_find_next_prime(1);
    printf("he prime number after 1 is %d\n", result);

	result = ft_find_next_prime(9);
    printf("he prime number after 9 is %d\n", result);

    return 0;
} */