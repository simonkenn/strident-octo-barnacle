/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skenn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 17:24:59 by skenn             #+#    #+#             */
/*   Updated: 2015/09/21 19:11:08 by skenn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char buf[BUF_SIZE];

	j = 0;
	i = 1;
	while(i < argc)
	{
		fd = open(argv[j], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open (): failed, try again!");
		}
		ft_putnbr(fd);
		
		while(ret = read(fd, buf, sizeof(BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putnbr(ret);
			ft_putstr(buf);
		}
		if (close(fd) == -1)
		{
			ft_putstr("close (): failed, try again!");
			return (1);
		}
		i++;
	}
	return (0);
}
