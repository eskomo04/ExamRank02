/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:54:03 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/07 17:11:18 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ESSIA.h"

#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *prev = NULL;

	current = *begin_list;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = current->next;
			else
				prev->data = current->next;
			free(current);
			current = prev;
		}
		prev = current;
		current = current->next;
	}
}