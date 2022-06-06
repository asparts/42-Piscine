/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:24:45 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/24 13:25:48 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
//    char *test;
  //  ft_strcpy(test, "test");
   // printf("%s", test);
    return (0);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*cpy;

	cpy = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cpy);
}
