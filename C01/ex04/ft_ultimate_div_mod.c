/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:12:21 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/25 14:20:34 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

/*
int main(void){
	int x = 20;
	int y = 6;

	ft_ultimate_div_mod(&x, &y);

	printf("Divisão: %d\n", x);
	printf("Resto: %d\n", y); 
}
*/
