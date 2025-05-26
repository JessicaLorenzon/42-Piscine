/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:19:50 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/20 13:16:06 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	while (i < x -2)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_column(int x)
{
	int	i;

	i = 0;
	ft_putchar('|');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	count;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	count = 0;
	if (y > 0)
	{
		print_line(x);
	}
	while (count < y - 2)
	{
		print_column(x);
		count++;
	}
	if (y > 1)
	{
		print_line(x);
	}
}
