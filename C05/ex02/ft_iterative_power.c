/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:39:11 by rparise           #+#    #+#             */
/*   Updated: 2025/05/11 16:58:12 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		n = n * nb;
		i++;
	}
	return (n);
}

/* #include <stdio.h>

int	main()
{
	int result;
	result = ft_iterative_power(5, 3);
	printf("%d\n", result);

	return (0);
} */