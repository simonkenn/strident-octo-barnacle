/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skenn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 17:24:59 by skenn             #+#    #+#             */
/*   Updated: 2015/09/23 10:56:24 by skenn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#define BUF_SIZE 1

int		main(int argc, char **argv)
{
	int j;
	int i;
	int fd;
	int ret;
	t_list *list;
	char buf;
	//ssize_t read (int fd, void *buf, size_t count);
	i = 1;
	while(i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open (): failed, try again!");
		}
		//ft_putnbr(fd);
		while (read(fd, &buf, BUF_SIZE))
		{
			ft_list_push_back(&list, buf);
			//ft_print_list(list);
		}
		ft_print_list(list);
		if (close(fd) == -1)
		{
			ft_putstr("close (): failed, try again!");
			return (1);
		}
		i++;
	}
	return (0);
}
