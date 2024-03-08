/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:46:46 by hiono             #+#    #+#             */
/*   Updated: 2024/03/08 12:23:24 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static void	ft_insert(char *ptr, int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		*ptr = nb % 10 + '0';
		nb = nb / 10;
		ptr++;
	}
	if (n < 0)
	{
		*ptr = '-';
		ptr++;
	}
	*ptr = '\0';
}

static void	ft_rev(char*tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size - i - 1);
		*(tab + size - i - 1) = temp;
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		l;
	char	*ptr;

	if (n == 0)
	{
		ptr = malloc (2);
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	l = ft_getlen(n);
	ptr = malloc(sizeof(char) * (l + 1));
	ft_insert(ptr, n);
	ft_rev(ptr, l);
	write(fd, ptr, ft_strlen(ptr));
}
