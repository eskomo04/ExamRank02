/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESSIA.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: essiakomo <essiakomo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:52:48 by essiakomo         #+#    #+#             */
/*   Updated: 2026/02/01 17:15:01 by essiakomo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ESSIA_h
# define  ESSIA_h

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif