/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 12:32:56 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/01 12:44:52 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if(c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int space;
	int printed_char;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	space = 0;
	printed_char = 0;

	while (argv[1][i])
	{
		while (is_space(argv[1][i]) == 1)
		{
			space = 1;
			i++;
		}
		if (!argv[1][i])
			break;
		if (space == 1 && printed_char == 1)
			write(1, "   ", 3);
		space = 0;
		printed_char = 1;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
