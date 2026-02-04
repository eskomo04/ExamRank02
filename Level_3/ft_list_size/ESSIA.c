/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:55:07 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/01 17:19:10 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ESSIA.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

// #include <stdlib.h>
// #include <stdio.h>





// // Helper function to create a new node
// t_list *create_node(void *content)
// {
//     t_list *new_node = malloc(sizeof(t_list));
//     if (!new_node)
//         return NULL;
//     new_node->data = content;
//     new_node->next = NULL;
//     return new_node;
// }

// int main(void)
// {
//     t_list *head = NULL;
//     t_list *current = NULL;

//     for (int i = 0; i < 11; i++)
//     {
//         t_list *new_node = create_node("fafa"); // You can put real content here if needed
//         if (!head)
//         {
//             head = new_node;
//             current = head;
//         }
//         else
//         {
//             current->next = new_node;
//             current = current->next;
//         }
//     }

//     int size = ft_list_size(head);
//     printf("List size: %d\n", size); // Should print 10

//     // Free memory
//     current = head;
//     while (current)
//     {
//         t_list *tmp = current;
//         current = current->next;
//         free(tmp);
//     }

//     return 0;
// }
