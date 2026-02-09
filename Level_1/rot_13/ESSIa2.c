/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIa2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:02:01 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/09 17:17:16 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ((s[i] - 'a' + 13) % 26) + 'a'; 
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
		i++;
	}
}


int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		rot_13(argv[1]);
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}