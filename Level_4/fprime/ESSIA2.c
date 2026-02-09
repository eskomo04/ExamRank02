/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:02:12 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/08 21:19:02 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 2;
	int nbr;
	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= i)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr != i)
					printf("*");
				nbr = nbr / i;
			}
			else
				i++;
		}
	}
	printf("\n");
	return(0);
}