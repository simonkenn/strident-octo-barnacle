/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skenn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 20:25:21 by skenn             #+#    #+#             */
/*   Updated: 2015/09/23 10:54:25 by skenn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_print_list(t_list *begin_list)
{
	while (begin_list != NULL)
	{
		printf("%c", begin_list->data);
		begin_list = begin_list->next;
	}
}
