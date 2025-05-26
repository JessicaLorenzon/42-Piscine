/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:02:47 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/28 16:32:15 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
    char *str = "TESTE";
    char *str2 = "TESTE**";
    char *str3 = "";

    printf("%d\n", ft_str_is_uppercase(str));
    printf("%d\n", ft_str_is_uppercase(str2));
    printf("%d\n", ft_str_is_uppercase(str3));
}
*/
