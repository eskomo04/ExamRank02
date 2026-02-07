/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:04:26 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/04 19:33:23 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	if(c <= 32)
		return (1);
	return (0);
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int i = 0;

    while (str[i])
    {
         // If the character is uppercase, make it lowercase
         if (str[i] >= 'A' && str[i] <= 'Z')
             str[i] += 32;
         // Now check for lowercase character and if the previous char
         // is a space character, make it uppercase again
         if ((str[i] >= 'a' && str[i] <= 'z') && is_space(str[i - 1]))
             str[i] -= 32;
         // Now print every char
         ft_putchar(str[i++]);
    }
}

int main (int argc, char **argv)
{
	int i_argc = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else
		while (argc > i_argc)
		{
			str_capitalizer(argv[i_argc]);
			write(1, "\n", 1);
			i_argc++;
		}
}