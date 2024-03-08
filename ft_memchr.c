/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:05:01 by hiono             #+#    #+#             */
/*   Updated: 2024/03/08 15:32:18 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == c)
			return (str);
		str++;
		n--;
	}
	return (0);
}

/*
void	test(int c, size_t n)
{
	const char s[] = "abcde\0fgabc";
	char *ftres = ft_memchr(s, c, n);
	char *res = memchr(s, c, n);
	printf("%s %s\n", ftres, res);
}

int		main(void)
{
	test('b', 0);
	test('b', 1);
	test('b', 2);
	test('b', 3);
	test('b', 100);
	test('e', 2);
	test('g', 100);
	test('x', 10);
}
*/
