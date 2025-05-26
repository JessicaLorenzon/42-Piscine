/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:17:39 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/30 16:35:54 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strnlen(const char *dest, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = ft_strnlen(dest, size);
	slen = ft_strlen(src);
	i = 0;
	if (dlen == size)
	{
		return (size + slen);
	}
	while ((dlen + i + 1) < size && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
	{
		dest[dlen + i] = '\0';
	}
	return (dlen + slen);
}

/*
int main(void)
{
	char dest[10] = "Ola ";
	char src[] = "teste";

	unsigned int result = ft_strlcat(dest, src, sizeof(dest));

	printf("Destino: %s\n", dest);
	printf("Retorno: %d\n", result);
}
*/
