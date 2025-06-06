/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:25:41 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/05/08 11:35:10 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(42);
    	ft_putchar('\n');
    	ft_putnbr(-42);
    	ft_putchar('\n');
    	ft_putnbr(0);
    	ft_putchar('\n');
    	ft_putnbr(2147483647);
    	ft_putchar('\n');
    	ft_putnbr(-2147483648);
	ft_putchar('\n');
}
*/
