/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:20:59 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/08 13:54:50 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ws(char c)
{
	if (c == ' ' || c == '\0' || (c >= 9 && c <= 13))
	{
		return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int count = 0;
	
	while (str[count])
	{
		count++;
	}
	return (count - 1);
}



void	rev_wstr(char *str)
{
	int	len = ft_strlen(str);
	int end;
	int start;
	int flag;

	while (len >= 0)
	{
		while (len >= 0 && ws(str[len]))
			len--;
		end = len;
		while (len >= 0 && !ws(str[len]))
			len--;
		start = len + 1;
		flag = start;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (flag)		
			write(1, " ", 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return(0);
}