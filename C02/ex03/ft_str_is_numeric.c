/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorenzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:55:50 by jlorenzo          #+#    #+#             */
/*   Updated: 2025/04/28 16:26:16 by jlorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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
    char *str = "1234";
    char *str2 = "1234*";
    char *str3 = "";

    printf("%d\n", ft_str_is_numeric(str));
    printf("%d\n", ft_str_is_numeric(str2));
    printf("%d\n", ft_str_is_numeric(str3));
}
*/
