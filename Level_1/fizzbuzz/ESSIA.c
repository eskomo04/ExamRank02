/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:29:32 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/08 22:41:57 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr > 9)
		ft_putnbr(nbr/10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz\n", 9);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else
			{
				ft_putnbr(i);
				write(1, "\n", 1);
			}
		i++;
	}
	return (0);
}