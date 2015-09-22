/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skenn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 16:06:28 by skenn             #+#    #+#             */
/*   Updated: 2015/09/22 20:43:11 by skenn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
struct node
{
	void data;
	struct node *next;
	struct node *prev;
};
typedef struct		s_list
{
	size_t length;
	struct s_list	*tail;
	struct s_list	*head;
}					t_list;
t_list				*ft_tlist_new_list(void);
t_list				*ft_list_push_back(t_list *begin_list, void *data);
t_list				*ft_list_push_front(t_list *begin_list, void *data);
void				ft_print_list(t_list *begin_list);

#endif
