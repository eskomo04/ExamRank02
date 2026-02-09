/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 20:33:55 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/08 20:55:14 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_digit(int nbr)
{
	int count = 0;

	if (nbr <= 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return(count);
}

char	*ft_itoa(int nbr)
{
	int digit = count_digit(nbr);
	char *s = (char *)malloc(sizeof(char) * (digit + 1));
	if (!s)
		return (0);
	s[digit] = '\0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		s[--digit] = (nbr % 10) + '0';
		nbr /= 10;
	}
	s[--digit] = nbr + '0';
	return (s);
}

// #include <stdio.h>

// int main(void)
// {
// 	int nbr = 0;
// 	char *s;

// 	s = ft_itoa(nbr);
// 	printf("%s", s);
// }