/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:58:44 by hiono             #+#    #+#             */
/*   Updated: 2024/03/08 17:56:33 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy_s1;
	char	*ptr;
	size_t	len;
	size_t	i;

	cpy_s1 = (char *)s1;
	len = ft_strlen(cpy_s1);
	i = 0;
	while (0 < len && ft_in_set(set, *s1))
	{
		s1++;
		len--;
	}
	while (0 < len && ft_in_set(set, s1[len - 1]))
		len--;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
