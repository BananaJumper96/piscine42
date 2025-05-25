/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:50:49 by rparise           #+#    #+#             */
/*   Updated: 2025/05/14 11:35:41 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_validation(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	unsigned int	n;

	len = 0;
	n = 0;
	if (base_validation(base) == 1)
		n = nbr;
	else
		return ;
	if (n == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	while (base[len])
		len++;
	if (n >= (unsigned int)len)
		ft_putnbr_base(n / len, base);
	n = n % len;
	write(1, &base[n], 1);
}

/* int	main(void)
{
	// Test cases
	ft_putnbr_base(42, "0123456789");  // Output: 42
	write(1, "\n", 1);

	ft_putnbr_base(42, "01");  // Output: 101010
	write(1, "\n", 1);

	ft_putnbr_base(255, "0123456789ABCDEF");  // Output: FF
	write(1, "\n", 1);

	ft_putnbr_base(83, "poneyvif");  // Output: en
	write(1, "\n", 1);

	ft_putnbr_base(-42, "0123456789ABCDEF");  // Output: -2A
	write(1, "\n", 1);

	// Invalid base test cases
	ft_putnbr_base(42, "1123456789");  // Invalid base
	write(1, "\n", 1);

	ft_putnbr_base(42, "0");  // Invalid base (too short)
	write(1, "\n", 1);

	return (0);
} */
