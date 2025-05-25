/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:38:39 by rparise           #+#    #+#             */
/*   Updated: 2025/05/15 10:52:03 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	source[] = "42Network";
	char	destination1[20];
	char	destination2[20];
	char	destination3[20];

	// Case 1: n < length of source
	ft_strncpy(destination1, source, 4);
	printf("n < len(src): %s\n", destination1);

	// Case 2: n == length of source
	ft_strncpy(destination2, source, 9);
	printf("n == len(src): %s\n", destination2);

	// Case 3: n > length of source
	ft_strncpy(destination3, source, 15);
	printf("n > len(src): %s\n", destination3);

	return (0);
}
 */