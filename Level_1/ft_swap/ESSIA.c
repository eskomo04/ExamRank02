/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:57:37 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/09 16:03:24 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


// #include <stdio.h>

// int main(void)
// {
// 	int a = 4;
// 	int b = 2;

// 	printf("This a and b before:  %d, %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("This a and b after:  %d, %d\n", a, b);

// }