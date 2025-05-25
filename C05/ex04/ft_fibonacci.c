/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:04:54 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 11:42:57 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci (index - 2));
}

/* #include <stdio.h>

int main()
{
    int result;

    result = ft_fibonacci(7);  // Example: Fibonacci of 5
    printf("Fibonacci of 5: %d\n", result);  // Expected output: 5

    return (0);
} */