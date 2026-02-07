/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:42:21 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/07 12:56:04 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_delimiter(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int word_count(char *s)
{
	int inword = 0;
	int count = 0;
	
	while (*s)
	{
		if ((*s != '\t' || *s != ' ') && inword == 0)
		{
			inword = 1;
			count++;
		}
		else
			inword = 0;
		s++;
	}
	return (count);
}

char    **ft_split(char *str)
{
	int wc = word_count(str);
	char **arr;
	char *start;
	int len_word;
	int i = 0;
	int word;
	
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (0);
	while (*str)
	{
		while (is_delimiter(*str))
			str++;
		if (!str)
			break;
		start = str;
		while (!is_delimiter(*str))
			str++;
		len_word = str - start;
		arr[i] = (char *)malloc(sizeof(char) * (len_word + 1));
		word = 0;
		while (word < len_word)
		{
			arr[i][word] = start[word];
			word++;
		}
		arr[i][word] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}


#include <stdio.h>

int	main(void)
{
	char *s = "There     should be an array of 8         words! ";
	char **array = ft_split(s);
	int i = 0;
	int count = word_count(s);

	printf("wordcount: %d\n", count);
	while (i < count)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}