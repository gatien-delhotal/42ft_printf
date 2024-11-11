/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:43:41 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/10 21:42:07 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	cast;

	cast = (long) n;
	if (cast < 0)
	{
		ft_putchar_fd('-', fd);
		cast = -cast;
	}
	if (cast > 9)
		ft_putnbr_fd((int)(cast / 10), fd);
	ft_putchar_fd(cast % 10 + '0', fd);
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(-12345, 1);
}*/