/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:05:10 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/19 23:08:36 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
/*
int	main(void)
{
	ft_putstr("string");
	return (0);
}*/

void	ft_putstr(char *str)
{
	int	count;
	int	count2;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	count2 = count;
	while (count != 0)
	{	
		str--;
		count--;
	}
	write(1, str, count2);
}
