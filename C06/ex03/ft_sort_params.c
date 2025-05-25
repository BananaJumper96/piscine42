/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:23:52 by rparise           #+#    #+#             */
/*   Updated: 2025/05/19 19:44:36 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_sort(char	**s1, char	**s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char **argv)
{
	int		j;
	int		sorted;

	if (argc > 1)
	{
		sorted = 0;
		while (!sorted)
		{
			sorted = 1;
			j = 1;
			while (j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					ft_sort(&argv[j], &argv[j + 1]);
					sorted = 0;
				}
				j++;
			}
		}
		j = 1;
		while (j < argc)
			ft_putstr(argv[j++]);
	}
	return (0);
}
