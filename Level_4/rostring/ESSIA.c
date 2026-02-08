/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:57:34 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/08 15:11:36 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ws(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rostring(char *str)
{
	char *first;
	int i = 0;
	int j = 0;

	while (ws(str[i]) && str[i])	//skip whitespaces/tabs
		i++;
	first = &str[i];
	while (str[i] && !ws(str[i]))	//skip first word
		i++;
	while (ws(str[i]) && str[i])	//skip whitespaces/tabs
		i++;
	while (str[i])
	{
		while (str[i] && !ws(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		if ((str[i] == '\0' || ws(str[i])) && !ws(str[i - 1]))
			write(1, " ", 1);
		while (str[i] && ws(str[i]))	//skip whitespaces/tabs
			i++;
	}
	while (first[j] && !ws(first[j])) //frist[j] isnt == '\0' for the case there was only one word
	{
		write(1, &first[j], 1);
		j++;
	}
}
int main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
