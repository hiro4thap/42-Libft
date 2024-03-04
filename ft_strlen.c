/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:20:25 by hiono             #+#    #+#             */
/*   Updated: 2024/01/26 15:01:58 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
int	main(void)
{
	char	strings[] = "Hello!";
	int	i;

	i = ft_strlen(strings);
	printf("number of letters:%d", i);
}
*/
