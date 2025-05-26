/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:33:28 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/25 14:24:50 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/*
int	main(void)
{
	 char str[] = "Hello string";
	 
	 int length = ft_strlen(str);

	 printf("Tamanho da string: %d\n", length);
}
*/
