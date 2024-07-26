/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_searching_valid_path_in_the_map.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:52:46 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:53:07 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_searching_valid_path_in_the_map(t_game *game_data, char c)
{
	int		i;
	int		j;
	t_bool	has_valid_path;
	char	**temp_map;

	i = -1;
	while (++i < map_line_counter(game_data->map))
	{
		j = -1;
		while (++j < map_column_counter(game_data->map))
		{
			if (game_data->map[i][j] == c)
			{
				temp_map = ss_duplicating_map(game_data->map,
						map_line_counter(game_data->map), 0);
				if (!temp_map)
					return ;
				has_valid_path = FALSE;
				ss_flood_fill(temp_map, i, j, &has_valid_path);
				free_map(temp_map, map_line_counter(game_data->map));
				if (!has_valid_path)
					ss_exit_game("There is not a valid path in the map!\n");
			}
		}
	}
}
