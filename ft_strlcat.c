/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:52:03 by hiono             #+#    #+#             */
/*   Updated: 2024/02/01 10:52:04 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_min(unsigned int i, unsigned int j)
{
	if (i <= j)
	{
		return (i);
	}
	return (j);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sl;
	unsigned int	dl;

	sl = ft_strlen(src);
	dl = ft_strlen(dest);
	i = 0;
	if (size == 0)
	{
		return (sl);
	}
	while (src[i] && dl + i < size - 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (ft_min(dl, size) + sl);
}

/*
int	main(void)
{
	char	dest1[20] = "abcd";
	char	dest2[20] = "abcd";
	char	src[] = "ABCD";
	unsigned int	size = 20;
	unsigned int	i = ft_strlcat(dest1, src, size);
	unsigned int	j = strlcat(dest2, src, size);
	printf("%s, %d\n", dest1, i);
	printf("%s, %d\n", dest2, j);
	return (0);
}
*/