/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 16:02:56 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/23 17:00:33 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	len = (int)ft_strlen(str);
	ft_putstr(str);
	free(str);
	return (len);
}

// int	ft_putnbr(int n)
// {
// 	char	c;
// 	int		count;

// 	count = 0;
// 	if (n == -2147483648)
// 		return (write(1, "-2147483648", 11));
// 	if (n < 0)
// 	{
// 		count += write(1, "-", 1);
// 		n *= -1;
// 	}
// 	if (n > 9)
// 		count += ft_putnbr(n / 10, fd);
// 	c = n % 10 + '0';
// 	write(1, &c, 1);
// }
/*
int	main(void)
{
	ft_putnbr_fd(457, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(-2457, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(500, 1);
    write(1, "\n", 1);
	return (0);
}*/
