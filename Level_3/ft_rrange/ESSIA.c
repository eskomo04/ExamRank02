/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 18:08:48 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/01 18:15:26 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *arr;
	int i = 0;
	int nbr;

	if (start > end)
		arr = malloc(sizeof(int) * ((start - end) + 1));
	else if (start < end)
		arr = malloc(sizeof(int) * ((end - start) + 1));
	else
		arr = malloc(sizeof(int));
	if (!arr)
		return (0);
	nbr = end;
	if (start > end)
	{
		while (start >= nbr)
			arr[i++] = nbr++;
	}
	else if (start < end)
	{
		while (start <= nbr)
			arr[i++] = nbr--;
	}
	else
		arr[i] = end;
	return (arr);
}
// #include <stdio.h>

// int main(void)
// {
//     int *nums = ft_rrange(1,3);
//     int i = 0;
    
//     while (i < 3)
//     {
//         printf("%d\n", nums[i]);
//         i++;
//     }
//     free(nums);
//     return (0);
// }