/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:18:35 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/08 15:35:18 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	int tmp;
	unsigned int i = 0;

	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] =tmp;
			i = 0;
		}
		else
			i++;
	}
}



// #include <stdio.h>

// int main(void) 
// {
// 	int arr[] = {5, 2, 8, 1, 3, 2, 34, 6, 656, 657, 0};
// 	unsigned int size = sizeof(arr) / sizeof(arr[0]);

// 	printf("Before sorting: ");
// 	unsigned int i = 0;
// 	while (i < size) 
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	sort_int_tab(arr, size);
// 	printf("\nAfter sorting: ");
// 	i = 0;
// 	while (i < size) 
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }