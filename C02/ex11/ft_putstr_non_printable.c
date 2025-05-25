/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:38:55 by rparise           #+#    #+#             */
/*   Updated: 2025/05/06 10:38:55 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	g_hex[16];

	g_hex[16] = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 32 || c > 126)
		{
			write(1, "\\", 1);
			write(1, &g_hex[((unsigned char)c) / 16], 1);
			write(1, &g_hex[((unsigned char)c) % 16], 1);
		}
		else
		{
			write(1, &c, 1);
		}
		i++;
	}
}

/*  #include <unistd.h>

void ft_putstr_non_printable(char *str); // forward declaration

int main(void)
{
    char test[] = "Hello\nWorld\t!"; // Contains newline and tab (non-printable)
    ft_putstr_non_printable(test);
    write(1, "\n", 1); // Add a newline after output for readability
    return 0;
}
 */