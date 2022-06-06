/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:16:54 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/18 18:06:53 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

/*
int main(void)
{
     int a;
     int b;

	a = 21;
	b = 8;

    ft_ultimate_div_mod(&a, &b);
    return(0);
}*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resulta;
	int	resultb;

	resulta = *a / *b;
	resultb = *a % *b;
	*a = resulta;
	*b = resultb;
}
