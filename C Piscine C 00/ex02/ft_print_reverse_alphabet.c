/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:59:36 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/18 13:11:41 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
/*
int     main(void)
{
        ft_print_alphabet();
        return 0;
}*/

void	ft_print_alphabet(void)
{
	char	z;

	z = 122;
	while (z > 96)
	{
		write(1, &z, 1);
		z--;
	}
}
