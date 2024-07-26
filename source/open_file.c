/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:59:31 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:59:33 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	open_file(char *file_name, t_game *game_data)
{
	int		i;
	int		fd;
	char	map[2024];

	fd = open(file_name, 0);
	if (fd < 0)
		return ;
	i = -1;
	while (file_name[++i])
		if (file_name[i] == '.' && !(file_name[i + 1] == 'b'
				&& file_name[i + 2] == 'e' && file_name[i + 3] == 'r'
				&& file_name[i + 4] == '\0'))
			return ;
	i = -1;
	while (++i <= 2024)
		map[i] = '\0';
	i = 1;
	i = read(fd, map, 2024);
	if (i == -1 || i == 0)
		return ;
	map[i] = '\0';
	ss_searching_invalid_elements_in_the_map(map);
	ss_verifying_the_elements_in_the_map(map);
	game_data->map_file_content = map;
}
