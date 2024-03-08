/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:23:11 by hiono             #+#    #+#             */
/*   Updated: 2024/03/08 12:23:24 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_strcat(char *dst, char *src)
{
	int		i;
	int		len;

	len = ft_strlen(dst);
	i = 0;
	while (src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*cpy_s1;
	char	*cpy_s2;
	size_t	ls1;
	size_t	ls2;

	cpy_s1 = (char *)s1;
	cpy_s2 = (char *)s2;
	ls1 = ft_strlen(cpy_s1);
	ls2 = ft_strlen(cpy_s2);
	ptr = malloc(sizeof(char) * (ls1 + ls2 + 1));
	ptr[0] = '\0';
	ft_strcat(ptr, cpy_s1);
	ft_strcat(ptr, cpy_s2);
	return (ptr);
}
