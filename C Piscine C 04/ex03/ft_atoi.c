/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:00:52 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/31 18:18:10 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);
/*
int	main(void)
{
	char	test[25] = "----2147483648";
	printf("a = %d\n", ft_atoi(test));

	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));

	return (0);
}*/

int	ft_atoi(char *str)
{
	long long int	result;
	long long int	sign;
	int				number;

	result = 0;
	sign = 1;
	number = 1;
	while (*str != '\0' && number)
	{
		while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\r' || *str == '\v'
			|| *str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}	
		if (*str >= '0' && *str <= '9')
			result = result * 10 + *str - 48;
		else
			number = 0;
		str++;
	}
	return (result * sign);
}
