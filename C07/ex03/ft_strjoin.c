/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparise <rparise@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:59:50 by rparise           #+#    #+#             */
/*   Updated: 2025/05/19 16:45:58 by rparise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sizeofstrs(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;
	int	sep_len;

	i = 0;
	len = 0;
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	len += sep_len * (size - 1);
	return (len);
}

char	*alloc_array(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		return (result);
	}
	result = malloc((sizeofstrs(size, strs, sep) + 1) * sizeof(char));
	return (result);
}
// size -1 because the last does not need a sep

int	append_sep(char *result, char *sep, int k)
{
	int	l;

	l = 0;
	while (sep[l])
	{
		result[k] = sep[l];
		k++;
		l++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	result = alloc_array(size, strs, sep);
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i != size - 1)
			k = append_sep(result, sep, k);
		i++;
	}
	result[k] = '\0';
	return (result);
}
