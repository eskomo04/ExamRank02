/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:35:11 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/04 13:55:29 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm = (a > b) ? a : b;
	
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if ((lcm % a == 0) && (lcm % b == 0))
			return (lcm);
		lcm++;
	}	
}

//NOT PART OF SUBJECT
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	unsigned int LCM;
	if (argc == 3)
	{
		LCM = lcm(atoi(argv[1]), atoi(argv[2]));
		printf("%u", LCM);
	}
	return (0);
}