/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skenn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 23:10:43 by skenn             #+#    #+#             */
/*   Updated: 2015/09/23 10:45:42 by skenn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(char data)
{
	t_list *element;

	element = malloc(sizeof(*element));
	if (element != NULL)
	{
		element->data = data;
		element->next = NULL;
	return (element);
	}
	else
		return (NULL);
}

void		ft_list_push_back(t_list **begin_list, char data)
{
	t_list *aux;

	aux = *begin_list;
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = ft_create_elem(data);
	}
}
