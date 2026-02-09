/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 01:48:18 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/09 02:11:32 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}


int main(int argc, char **argv)
{
	int i = 0;
	int j;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (is_upper(argv[1][i]))
			{
				j = 0;
				while (j <= (argv[1][i] - 'A'))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (is_lower(argv[1][i]))
			{
				j = 0;
				while (j <= (argv[1][i] - 'a'))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
