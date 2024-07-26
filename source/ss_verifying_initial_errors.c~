/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_verifying_initial_errors.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:59:54 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:59:57 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_verifying_initial_errors(char *s, t_game *game_data)
{
	game_data->map_file_content = NULL;
	game_data->map = NULL;
	open_file(s, game_data);
	if (!game_data->map_file_content)
		ss_exit_game("The map file is empty!\n");
	if (!ss_map(game_data))
		ss_exit_game("Invalid map!\n");
	else if (ss_verifying_maps_structure(game_data->map, &(int){0},
		&(int){0}) == -1)
		ss_exit_game("The selected map is not perfect!\n");
	else if (map_line_counter(game_data->map) > 16
		|| map_column_counter(game_data->map) > 31)
		ss_exit_game("The selected map is too big!\n");
	ss_searching_valid_path_in_the_map(game_data, 'C');
	ss_searching_valid_path_in_the_map(game_data, 'E');
}
