/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:44:12 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/23 16:50:27 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void){
	int x = 10;
	int y = 20;

	printf("Antes da troca: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("Depois da troca: x = %d, y = %d\n", x, y);
}
*/
