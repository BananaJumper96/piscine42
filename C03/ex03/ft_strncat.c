/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:40:02 by rparise           #+#    #+#             */
/*   Updated: 2025/05/06 10:40:02 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (i < nb && src[i] != '\0')
	{
		*ptr = src[i];
		ptr++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
