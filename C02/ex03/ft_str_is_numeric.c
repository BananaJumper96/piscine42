/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:57:10 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 10:54:21 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *tests[] = {
		"123456",
		"0000",
		"42Network",
		"",
		"1234a567",
		"9876543210",
		"   ",
		"12 34",
		NULL
	};

	int i = 0;
	while (tests[i])
	{
		printf("Test \"%s\": %d\n", tests[i], ft_str_is_numeric(tests[i]));
		i++;
	}
	return (0);
} */
