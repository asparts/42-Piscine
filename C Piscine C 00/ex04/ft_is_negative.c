/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:09:04 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/18 08:29:55 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number);

/*int main(){

ft_is_negative(42);
return 0;
}*/
void	ft_is_negative(int number)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (number < 0)
	{
		write(1, &n, 1);
	}
	else
	{
		write(1, &p, 1);
	}	
}
