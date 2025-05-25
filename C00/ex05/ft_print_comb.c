/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:40:48 by rparise           #+#    #+#             */
/*   Updated: 2025/05/14 10:57:37 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				write(1, &(char){a + '0'}, 1);
				write(1, &(char){b + '0'}, 1);
				write(1, &(char){c + '0'}, 1);
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 2);
				++c;
			}
			++b;
		}
		++a;
	}
}

/* int	main(void)
{
	ft_print_comb();
	return (0);
} */

/*
The values that are printed are ASCI values. 
Adding'0' to the number will give increase 
it to the ASCII value which will print the correct value in write.
Ex - ASCII value for 0 is 48. int = 0 stores 0 as a value, but
the ASCII value is being printed. Adding 0 + '0' will make it 48,
which will print '0'.
&(char){a + '0'} is called a compound literal.
*/
