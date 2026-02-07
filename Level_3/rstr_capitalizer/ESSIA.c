/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:50:11 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/04 18:53:36 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/**
 * DOESN'T WORK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 */
#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
			return (1);
		return (0);
}
int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
			return (1);
		return (0);
}

void upper_arg(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		while (is_space(str[i]))
		{
			i++;
		}
		if (!str[i])
			break;
		while (!is_space(str[i]))
		{
			if (is_lower(str[i]) && (is_space(str[i + 1]) || !str[i + 1]))
			{
				c = str[i] - 32;
				//write(1, &str[i] - 32, 1);
				//break;
			}
			else if ((is_lower(str[i]) || is_upper(str[i])) && (!is_space(str[i + 1]) || str[i + 1]))
			{
				if (is_upper(str[i]))
				{
					c = str[i] + 32;
					//write(1, &str[i] + 32, 1);
					//break;
				}
				else
					c = str[i];
					//write(1, &str[i], 1);
			}
			else
				c = str[i];
				//write(1, &str[i], 1);
			write(1, &c, 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	int i_argc = 1;

	if (argc > 1)
	{
		while (argc > i_argc)
		{
			upper_arg(argv[i_argc]);
			write(1, "\n", 1);
			i_argc++;
		}
	}
	write(1, "\n", 1);
	return (0);
}