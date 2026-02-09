/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:21:06 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/09 17:26:43 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = ((*s - 'a' + 1) % 26) + 'a';
		else if (*s >= 'A' && *s <= 'Z')
			*s = ((*s - 'A' + 1) % 26) + 'A';
		write(1, s++, 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}