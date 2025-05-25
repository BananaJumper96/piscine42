/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:10:13 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 10:55:37 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *tests[] = {
		"Hello, world!",
		"This is 42.",
		"",                   // Empty string
		"\tTab character",    // Contains non-printable
		"Printable123",       
		"\nNewline",          // Contains non-printable
		"~!@#$%^&*()",        
		"\x7F",               // DEL (non-printable)
		NULL
	};

	int i = 0;
	while (tests[i])
	{
		printf("Test \"%s\": %d\n", tests[i], ft_str_is_printable(tests[i]));
		i++;
	}
	return (0);
}
 */