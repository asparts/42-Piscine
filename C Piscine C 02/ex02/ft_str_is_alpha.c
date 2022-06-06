/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:44:01 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/24 06:21:48 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	ft_str_is_alpha("string");
	return (0);
}*/

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			return (0);
		}
		else if (str[i] == 94 || str[i] == 95 || str[i] == 96)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
