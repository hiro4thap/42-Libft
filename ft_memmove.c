/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:54:11 by hiono             #+#    #+#             */
/*   Updated: 2024/03/08 15:27:00 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = malloc(sizeof(char) * len);
	while (i < len)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dst);
}
