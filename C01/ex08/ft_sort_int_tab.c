/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:26:55 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/23 16:38:09 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int main(void){
	int arr1[] = {5, 2, 9, 1, 5, 6};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	printf("Array original: ");
	for (int i = 0; i < size1; i++){
		printf("%d", arr1[i]);
	}
	printf("\n");

	ft_sort_int_tab(arr1, size1);

	printf("Array ordenado: ");
	for (int i = 0; i < size1; i++){
		printf("%d", arr1[i]);
	}
}
*/
