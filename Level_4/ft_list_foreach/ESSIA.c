/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:45:52 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/07 16:53:09 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ESSIA.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != '\0')
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
