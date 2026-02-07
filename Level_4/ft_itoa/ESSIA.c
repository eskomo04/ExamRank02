/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:53:20 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/05 18:14:55 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_count_digit(int nbr)
{
	int i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	char *itoa;
	int len_digit;
	
	len_digit = ft_count_digit(nbr);
	itoa = malloc(sizeof(char) * (len_digit + 1));
	if (!itoa)
		return(0);
	itoa[len_digit] = '\0';
	if (nbr < 0)
	{
		itoa[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		itoa[--len_digit] = (nbr % 10) + '0';
		nbr /= 10;
	}
	itoa[--len_digit] = nbr + '0';
	return(itoa);
}

// //NOT PART OF TJE SUBJECT
// #include <stdlib.h>
// #include <stdio.h>

// int main (int argc, char **argv)
// {
// 	char *itoa;
// 	int nbr;

// 	(void)argc;
// 	nbr = atoi(argv[1]);
// 	itoa = ft_itoa(nbr);
// 	printf("%s", itoa);
// 	return (0);
// }