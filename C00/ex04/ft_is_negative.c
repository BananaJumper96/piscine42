/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:32:25 by rparise           #+#    #+#             */
/*   Updated: 2025/04/30 15:30:46 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n >= 0)
	{
		letter = 'P';
		write(1, &letter, 1);
	}
	else
	{
		letter = 'N';
		write(1, &letter, 1);
	}
}
