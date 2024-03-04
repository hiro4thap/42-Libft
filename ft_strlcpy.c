/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:59:15 by hiono             #+#    #+#             */
/*   Updated: 2024/01/31 14:12:58 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = str;
	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lsrc;

	i = 0;
	lsrc = ft_strlen(src);
	if (size == 0)
	{
		return (lsrc);
	}
	while (i < size - 1 && i < lsrc)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lsrc);
}

int main(void)
{
	char	a[] = "ABCDE";
	char	b[] = "abcdefghijkl";
	char	c[] = "abcdefghijkl";
	unsigned int	size = 3;
	unsigned int	bi = strlcpy(b, a, size);
	unsigned int	ci = strlcpy(c, a, size);
	int	i = 0;

	printf("a: %s\n", a);
	printf("b: %s\n", b);
	printf("bi: %d\n", bi);
	printf("b including null: ");
	while (i < 8)
	{
		printf("%c", *(b + i));
		i++;
	}
	printf("\n");
	printf("c: %s\n", c);
	printf("ci: %d\n", ci);
	i = 0;
	printf("c including null: ");
	while (i < 8)
	{
		printf("%c", *(c + i));
		i++;
	}
	printf("\n");
}
