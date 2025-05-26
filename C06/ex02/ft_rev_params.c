/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:32:57 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/05/08 12:37:11 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[k][j])
		{
			ft_putchar(argv[k][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		k--;
	}
}
