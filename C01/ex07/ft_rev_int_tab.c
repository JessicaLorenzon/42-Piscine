/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:32:45 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/23 16:39:24 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{	
	int	*start_ptr;
	int	*end_ptr;
	int	temp;

	start_ptr = tab;
	end_ptr = tab + size - 1;
	while (start_ptr < end_ptr)
	{
		temp = *start_ptr;
		*start_ptr = *end_ptr;
		*end_ptr = temp;
		start_ptr++;
		end_ptr--;
	}
}

/*
int main(void){
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Antes: ");
	for (int i = 0; i < size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");

	ft_rev_int_tab(arr, size);

	printf("Depois: ");
	for (int i = 0; i < size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}
*/
