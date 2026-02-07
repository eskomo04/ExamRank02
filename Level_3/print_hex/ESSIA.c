/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:27:37 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/04 16:47:52 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_itohex(int nbr)
{
	char *hex = "0123456789abcdef";
	char c;

	if (nbr >= 16)
		ft_itohex(nbr / 16);
	c = hex[nbr % 16];
	write(1, &c, 1);
}
int ft_atoi(char *s)
{
	int result = 0;
	int i = 0;
	int sign = 1;
	
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	
	while (s[i])
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}
	return (result * sign);
}

int main(int argc, char **argv)
{
	int nbr;
	if(argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr >= 0)
		{
			ft_itohex(nbr);
		}
	}
	write(1, "\n", 1);
	return (0);
}