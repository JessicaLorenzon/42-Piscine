/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:19:48 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/28 16:25:17 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int main(void)
{
    char *str = "Teste";
    char *str2 = "teste**";
    char *str3 = "";

    printf("%d\n", ft_str_is_alpha(str));
    printf("%d\n", ft_str_is_alpha(str2));
    printf("%d\n", ft_str_is_alpha(str3));
}
*/
