/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:04:12 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/09 16:27:31 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int len = 0;
	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		len--;
		while (is_space(argv[1][len]) && len >= 0)
			len--;
		while (!is_space(argv[1][len]) && len >= 0)
			len--;
		len++;
		while (!is_space(argv[1][len]) && argv[1][len])
		{
			write(1, &argv[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}