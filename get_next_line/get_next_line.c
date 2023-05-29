/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalmero <asalmero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:42:06 by asalmero          #+#    #+#             */
/*   Updated: 2023/05/29 18:43:21 by asalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);



	line = "hello, world";
	return (line);
}
/*
int main()
{
	int fd;

	fd = open("test.txt", O_RDONLY);
	
	
	return (0);
}*/
