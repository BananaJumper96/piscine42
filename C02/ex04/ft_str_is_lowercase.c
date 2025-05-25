/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:01:47 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 10:54:50 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *tests[] = {
		"hello",
		"world",
		"lowercase",
		"HelloWorld",
		"",
		"123abc",
		"alllower",
		"UPPER",
		NULL
	};

	int i = 0;
	while (tests[i])
	{
		printf("Test \"%s\": %d\n", tests[i], ft_str_is_lowercase(tests[i]));
		i++;
	}
	return (0);
} */
