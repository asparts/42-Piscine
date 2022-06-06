/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:54:28 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/17 17:34:00 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
/*
int	main(void)
{
	ft_print_alphabet();
	return 0;
}*/

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a < 123)
	{
		write(1, &a, 1);
		a++;
	}
}
