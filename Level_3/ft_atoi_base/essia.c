/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:00:49 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/01 13:31:20 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int is_valid_base(char c, int base)
{
	char *l_case;
	char *u_case;
	int i;

	l_case = "0123456789abcdef";
	u_case = "0123456789ABCDEF";
	i = 0;
	while (i < base)
	{
		if (c == l_case[i] || c == u_case[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && is_valid_base(str[i], str_base) != -1)
	{
		result = result * str_base + is_valid_base(str[i], str_base);
		i++;
	}
	return (result * sign);
}

// #include <unistd.h>
// #include <stdio.h>

// int main(void)
// {
// 	printf("That's 2 in base:2 -> %d\n", ft_atoi_base("10", 2));
// 	printf("That's -11 in base:2 -> %d\n", ft_atoi_base("   -1011", 2));
// 	printf("That's -266 in base:16 -> %d\n", ft_atoi_base("-10A", 16));
// 	printf("That's 10 in base:10 -> %d\n", ft_atoi_base("10", 10));
// 	printf("That's 255 in base:16 -> %d\n", ft_atoi_base(" FF-", 16));

// 	return (0);
// }