/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:38:45 by rparise           #+#    #+#             */
/*   Updated: 2025/05/06 10:38:45 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/* #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Hello, 42!";
	char	dest[20];
	unsigned int	ret;

	ret = ft_strlcpy(dest, src, sizeof(dest));
	printf("Source: \"%s\"\n", src);
	printf("Destination: \"%s\"\n", dest);
	printf("Returned length: %u\n\n", ret);

	// Test with smaller size
	char	dest2[5];
	ret = ft_strlcpy(dest2, src, sizeof(dest2));
	printf("Source: \"%s\"\n", src);
	printf("Destination: \"%s\"\n", dest2);
	printf("Returned length: %u\n\n", ret);

	// Test with size = 0
	char	dest3[20];
	ret = ft_strlcpy(dest3, src, 0);
	printf("Source: \"%s\"\n", src);
	printf("Destination (should be unchanged/empty): \"%s\"\n", dest3);
	printf("Returned length: %u\n", ret);

	return (0);
} */
