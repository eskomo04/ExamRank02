/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:04:17 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/04 14:16:31 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
	char c;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
		write(1, "0", 1);
	else if (argc >= 2)
	{
		ft_itoa(argc - 1);
	}
	write(1, "\n", 1);
	return (0);
}