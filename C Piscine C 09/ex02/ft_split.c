/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:10:15 by mnummi            #+#    #+#             */
/*   Updated: 2022/06/12 13:37:26 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		count_words(char *str, char *charset);
int		is_char_separator(char c, char *charset);
void	write_word(char *dest, char *from, char *charset);
void	write_split(char **split, char *str, char *charset);
/*
int main()
{
	int i = 0;
	char **result;
	result = ft_split("test%test1%test2", "%");
	while(i < 3)
	{
		printf("%s", result[i]);
		i++;
	}
	return (0);
}*/

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;

	word_count = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	result[word_count] = 0;
	write_split(result, str, charset);
	return (result);
}

int	is_char_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if ((is_char_separator(str[i + 1], charset) == 1
				&& is_char_separator(str[i], charset) == 0))
		{
			words++;
		}
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (is_char_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_char_separator(str[i], charset) == 1)
		{
			i++;
		}
		else
		{
			j = 0;
			while (is_char_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}
