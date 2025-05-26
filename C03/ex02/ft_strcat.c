/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:09:28 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/29 13:16:19 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[100] = "teste";
	char dest[100] = "ola ";

	ft_strcat(dest, src);

	printf("Origem (src): %s\n", src);
	printf("Destino (dest): %s\n", dest);
}
*/
