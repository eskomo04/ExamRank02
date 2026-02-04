/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:09:18 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/04 13:33:03 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if(argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (!argv[1][i])
			write(1, "1", 1);
		else
			write (1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}