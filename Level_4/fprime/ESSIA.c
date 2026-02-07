/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:28:57 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/05 17:46:04 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int num;
	int i = 2;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num == 1)
		printf("1");
		while (i <= num)			//num will be devided and smaller -> the iteration should work till num become equal to i
		{
			if(num % i == 0)		//Only if it's devidable without remainder
			{
				printf("%d", i);
				if (num != i)		//If num became equal to i than it means its the last iteration/prime factor
					printf("*");
				num = num / i;
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
