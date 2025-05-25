/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:02:35 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 10:51:35 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	source[] = "Hello, 42!";
	char	destination[50]; // Make sure it's large enough

	ft_strcpy(destination, source);
	printf("Source: %s\n", source);
	printf("Copied: %s\n", destination);
	return (0);
} */
