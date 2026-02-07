/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:41:18 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/05 16:58:50 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long ft_atoi(char *s)
{
	int i = 0;
	long result = 0;
	int sign = 1;
	
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] && (s[i] <= '9' && s[i] >= '0'))
	{
		result *= 10;
		result += s[i] - 48;
		i++;
	}
	return (result * sign);
}

void	ft_putnbr(int nbr)
{
	char c;
	
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}
void	mult_tab(int nbr)
{
	long x;
	int i = 1;
	
	while (i < 10)
	{
		x = i * nbr;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(x);
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	long nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr >= 0 && nbr < 2147483647)
			mult_tab((int)nbr);
	}
	write(1, "\n", 1);
}
