/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:44:01 by rparise           #+#    #+#             */
/*   Updated: 2025/05/19 17:45:30 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_convert_base.c
#include <stdlib.h>

int		base_validation(char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_nbr_to_str_base(int nbr, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*converted;

	if (!base_validation(base_from) || !base_validation(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	converted = ft_nbr_to_str_base(n, base_to);
	return (converted);
}
