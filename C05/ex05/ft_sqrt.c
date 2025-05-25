/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:17:17 by rparise           #+#    #+#             */
/*   Updated: 2025/05/21 19:25:34 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (x <= nb / x)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

/* 
#include <stdio.h>

int	main(void)
{
	printf("sqrt of 0 is %d\n", ft_sqrt(0));
	printf("sqrt of 1 is %d\n", ft_sqrt(1));
	printf("sqrt of 2 is %d\n", ft_sqrt(2));
	printf("sqrt of 1640045925 is %d\n", ft_sqrt(1640045925));
	printf("sqrt of 2147395600 is %d\n", ft_sqrt(2147395600));
	printf("sqrt of 2147483646 is %d\n", ft_sqrt(2147483646));
	printf("sqrt of 144120025 is %d\n", ft_sqrt(144120025));
	printf("sqrt of 685363074 is %d\n", ft_sqrt(685363074));
	printf("sqrt of 1587600 is %d\n", ft_sqrt(1587600));
	printf("sqrt of 1647509251 is %d\n", ft_sqrt(1647509251));
	printf("sqrt of 50310649 is %d\n", ft_sqrt(50310649));
	printf("sqrt of 1402220112 is %d\n", ft_sqrt(1402220112));
	printf("sqrt of 864242404 is %d\n", ft_sqrt(864242404));
	printf("sqrt of 515537584 is %d\n", ft_sqrt(515537584));
	printf("sqrt of 488807881 is %d\n", ft_sqrt(488807881));
	printf("sqrt of 2034487570 is %d\n", ft_sqrt(2034487570));
	return (0);
} */