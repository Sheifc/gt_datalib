/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/06/27 14:26:32 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

int	dll_empty(t_dlist *list)
{
	return (list == NULL);
}

int	dll_size(t_dlist *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

t_dlist	*dll_first(t_dlist *list)
{
	while (list && list->prev)
		list = list->prev;
	return (list);
}

t_dlist	*dll_last(t_dlist *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}

t_dlist	*dll_search(t_dlist *list, void *data)
{
	while (list)
	{
		if (list->data == data)
			return (list);
		list = list->next;
	}
	return (NULL);
}
