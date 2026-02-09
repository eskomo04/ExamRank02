/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:39:59 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/09 15:46:25 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}	
}

// int main(void)
// {
// 	char *s = "  faf fs saf";
// 	ft_putstr(s);
// }