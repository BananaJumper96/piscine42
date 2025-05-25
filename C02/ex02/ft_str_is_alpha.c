/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:43:47 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 10:53:46 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *tests[] = {
		"HelloWorld",
		"hello",
		"HELLO",
		"Hello123",
		"",
		"Hello!",
		"abcXYZ",
		"42Network",
		"justletters",
		NULL
	};

	int i = 0;
	while (tests[i])
	{
		printf("Test \"%s\": %d\n", tests[i], ft_str_is_alpha(tests[i]));
		i++;
	}
	return (0);
} */
