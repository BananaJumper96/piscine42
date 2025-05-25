/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:12:57 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 15:08:02 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (is_new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!is_new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			is_new_word = 0;
		}
		else
			is_new_word = 1;
		i++;
	}
	return (str);
}
