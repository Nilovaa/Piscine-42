/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:29:00 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/24 16:39:53 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "all_lib.h"

int	main(int argc, char *argv[])
{
	char	*c;
	int		fd;

	if (argc == 2)
	{
		c = (char *)malloc (sizeof (char) * 3000);
		fd = open("numbers.dict", O_RDONLY);
		read(fd, c, 3000);
		ft_write(ft_atoi_num(argv[1]), c);
		*c = '\0';
		close(fd);
		free(c);
	}
	else
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
}
