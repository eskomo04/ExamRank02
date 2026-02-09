/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 02:27:44 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/09 02:58:22 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	rotate(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = ((*str - 'a') + 13) % 26 + 'a';
		else if (*str >= 'A' && *str <= 'Z')
			*str = ((*str - 'A') + 13) % 26 + 'A';
		write(1, str++, 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rotate(argv[1]);
	write(1, "\n", 1);
	return (0);
}