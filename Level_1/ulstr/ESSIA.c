/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:46:59 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/09 17:50:52 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = *s + 32;
		else if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		write(1, s++, 1);
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}