/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:44:06 by sarfreit          #+#    #+#             */
/*   Updated: 2026/02/01 17:48:22 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int i;
    int nbr;

    if (end > start)
        arr = malloc(((end - start) + 1) * sizeof(int));
    else if (end < start)
        arr = malloc(((start - end) + 1) * sizeof(int));
    else
        arr = malloc(sizeof(int));
    if (!arr)
        return (0);
    i = 0;
    nbr = start;
    if (end > start)
        while (nbr <= end)
            arr[i++] = nbr++;
    else if (start > end)
        while (nbr >= end)
            arr[i++] = nbr--;
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