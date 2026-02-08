/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eskomo <eskomo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:52:07 by eskomo            #+#    #+#             */
/*   Updated: 2026/02/08 16:07:14 by eskomo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



typedef struct s_list
{
	int data;
	t_list *next;
}				t_list;


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int tmp;
	t_list *head = lst;

	while (lst->next)
	{
		if ((cmp)(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return(lst);
}
