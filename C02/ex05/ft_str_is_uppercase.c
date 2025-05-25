/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:04:57 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 10:55:10 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *tests[] = {
		"HELLO",
		"WORLD",
		"UPPERCASE",
		"HelloWorld",
		"",
		"123ABC",
		"ALLUPPER",
		"lowercase",
		NULL
	};

	int i = 0;
	while (tests[i])
	{
		printf("Test \"%s\": %d\n", tests[i], ft_str_is_uppercase(tests[i]));
		i++;
	}
	return (0);
}
 */