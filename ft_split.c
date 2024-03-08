/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:30:02 by hiono             #+#    #+#             */
/*   Updated: 2024/03/08 12:23:24 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arrlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			i++;
		while (*str && *str != c)
			str++;
	}
	return (i);
}

static int	ft_wrdlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && *str != c)
		i++;
	return (i);
}

static char	*ft_get_word(const char *src, char c)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(char) * (ft_wrdlen(src, c) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i] != c && src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *str, char c)
{
	char	**parr;
	int		i;

	i = 0;
	parr = malloc(sizeof(char *) * (ft_arrlen(str, c) + 1));
	while (*str)
	{
		if (*str != c)
		{
			parr[i] = ft_get_word(str, c);
			str += ft_wrdlen(parr[i], c);
			i++;
		}
		else
			str++;
	}
	parr[i] = 0;
	return (parr);
}
