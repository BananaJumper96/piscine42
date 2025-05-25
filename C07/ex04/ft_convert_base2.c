/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:45:03 by rparise           #+#    #+#             */
/*   Updated: 2025/05/19 17:45:03 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_convert_base2.c
#include <stdlib.h>

int base_validation(char *base)
{
	int i;
	int j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

int base_index(char c, char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int len = 0;
	int index;

	while (base[len])
		len++;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -sign;
	while ((index = base_index(str[i], base)) != -1)
	{
		result = result * len + index;
		i++;
	}
	return (result * sign);
}

int num_length(int nbr, int base_len)
{
	int len = (nbr <= 0) ? 1 : 0;
	while (nbr)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

char *ft_nbr_to_str_base(int nbr, char *base)
{
	int base_len = 0;
	int len;
	unsigned int n;
	char *result;

	while (base[base_len])
		base_len++;
	len = num_length(nbr, base_len);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	n = (nbr < 0) ? -nbr : nbr;
	while (len--)
	{
		result[len] = base[n % base_len];
		n /= base_len;
		if (len == 0 && nbr < 0)
			result[0] = '-';
	}
	return (result);
}
