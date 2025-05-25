/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:39:10 by rparise           #+#    #+#             */
/*   Updated: 2025/05/06 10:39:10 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to write the hexadecimal combinations in the second column
void	write_hex(unsigned char c)
{
	char	g_hex[16];

	g_hex[16] = "0123456789abcdef";
	write(1, &g_hex[c / 16], 1);
	write(1, &g_hex[c % 16], 1);
}

// Function to write the address of the first character followed by
void	write_address(unsigned long addr)
{
	char	buf[16];
	int		i;
	char	g_hex[16];

	g_hex[16] = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		buf[i] = g_hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buf, 16);
}

/* Function to write the lines that are 16 char long.
First while is to print the second column. Else statement is used for the padding
Second while is used to print the printable characters.
Non-printable characters: "."
*/
void	write_line(unsigned char *ptr, unsigned int line_size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < line_size)
			write_hex(ptr[i]);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	i = 0;
	while (i < line_size)
	{
		if (ptr[i] >= 32 && ptr[i] <= 126)
			write(1, &ptr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

/*Main function combining all the functions
	assign the address to a pointer to work
	in the loop with it.
	loop every 16 characters with i
	write an address, followed by ":"
	Check if the size - i is above 16 so that it
	can write a line that is 16 characters long
	If not, it will add the padding.
	*/
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		write_address((unsigned long)(ptr + i));
		write(1, ": ", 2);
		if (size - i >= 16)
			write_line(ptr + i, 16);
		else
			write_line(ptr + i, size - i);
		i += 16;
	}
	return (addr);
}

/* #include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);
int	main(void)
{
	char str[] = "Bonjour les aminches\nc est fou\ttout ce qu on peut faire ";

	ft_print_memory(str, sizeof(str));
	return (0);
}
 */