/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:36:39 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 12:53:36 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	array = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
