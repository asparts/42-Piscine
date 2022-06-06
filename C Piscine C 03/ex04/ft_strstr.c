/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:13:36 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/25 16:13:27 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char test[11] = "Waterfords";
	char test2[5] = "ford";
	char *p;

	p = ft_strstr(test,test2);
	while(*p != '\0'){
		printf("%c", *p);
		p++;
	}
	//to test add below print before return in if statement of ft_strstr
	//printf("%s", test);

	return (0);
}*/

int	g_i;
int	g_j;
int	g_x;
int	g_y;

char	*ft_strstr(char *str, char *to_find)
{
	g_i = 0;
	g_j = 0;
	g_x = 0;
	if (to_find[g_i] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (str[g_i] == to_find[g_j])
		{
			g_x = g_i;
			g_y = g_j;
			while (str[g_x] != '\0' && str[g_x] == to_find[g_y])
			{
				if (to_find[g_y + 1] == '\0')
					return (&str[g_i]);
				g_y++;
				g_x++;
			}
		}
		str++;
		g_x = 0;
		g_y = 0;
	}
	return (0);
}
