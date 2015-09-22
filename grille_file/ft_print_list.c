/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skenn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 20:25:21 by skenn             #+#    #+#             */
/*   Updated: 2015/09/23 00:58:14 by skenn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_print_list(t_list *begin_list)
{
	while (begin_list != NULL)
	{
		printf("%s", begin_list->data);
		begin_list = begin_list->next;
	}
}
