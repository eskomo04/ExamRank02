/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:24:27 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/01 18:07:12 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
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
	nbr = start;
	if (start > end)
	{
		while (nbr >= end)
			arr[i++] = nbr--;
	}
	else if (start < end)
	{
		while (nbr <= end)
			arr[i++] = nbr++;
	}
	else
		arr[i] = start;
	return (arr);
}


#include <stdio.h>

int main(void)
{
    int *nums = ft_range(1,3);
    int i = 0;
    
    while (i < 3)
    {
        printf("%d\n", nums[i]);
        i++;
    }
    free(nums);
    return (0);
}