/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:57:30 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/01 12:28:46 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if( c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);	
}

int main (int argc, char **argv)
{
	int i;
	int printed_char;
	int space;
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	
	i = 0;
	printed_char = 0;
	space = 0;
	
	while (argv[1][i])
	{
		while (is_space(argv[1][i]) == 1) 		// Iterate and pass all space/tabs and set space = 1 (there was spaces)
		{
			space = 1;
			i++;
		}
		if (!argv[1][i])						//Is it end of string!?
			break;
		if (space == 1 && printed_char == 1)	//Was there spaces and was there a char before (Are we between words!? -> than print delimiter/space)
			write(1, " ", 1);
		space = 0;
		printed_char = 1;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}