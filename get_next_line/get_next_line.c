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

static char	*ft_read_line(int fd, char *buf, char *data_buffer)
{
	int	read_bytes;
	char	*temp;

	read_bytes = 1;
	while (read_bytes != 0)
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes == -1)
			return (NULL);
		else if (read_bytes == 0)
			break ;
		buf[read_bytes] = '\0';
		if (data_buffer == NULL)
			data_buffer = ft_strdup("");
		temp = data_buffer;
		data_buffer = ft_strjoin(temp, buf);
		free(temp);
		temp = NULL;
		if (ft_strchr (buf, '\n'))
			break;
	}
	return (data_buffer);
}

static char *ft_new_line(char *line)
{
	size_t	i;
	char	*new_line;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\n' || line[i] == '\0')
		return (NULL);
	new_line = ft_substr(line, i + 1, ft_strlen(line) - i - 1);
	if (*new_line == '\0')
	{
		free(new_line);
		return (NULL);
	}
	line[i + 1] = '\0';
	return (new_line);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*data_buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	line = ft_read_line(fd, buf, data_buffer);
	free(buf);
	if (line == NULL)
		return (NULL);
	data_buffer = ft_new_line(line);
	return (line);
}

#include <fcntl.h>
#include <stdio.h>

void test_get_next_line(int fd)
{
	char *line;
	int line_number = 1;
	/*
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Line %d: %s\n", line_number, line);
		free(line);
		line_number++;
	}
	*/
	line = get_next_line(fd);
	printf("Line %d: %s\n", line_number, line);
	
}

int main()
{
	int fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to open the file.\n");
		return 1;
	}

	test_get_next_line(fd);

	close(fd);
	return 0;
}
