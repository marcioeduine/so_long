/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:59:38 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:59:40 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	so_long(char *s)
{
	t_game	game_data;

	ss_verifying_initial_errors(s, &game_data);
	game_data.root = mlx_init();
	ss_setting_element_images(&game_data);
	game_data.dir = 1;
	game_data.step = 1;
	game_data.window = mlx_new_window(game_data.root,
			map_column_counter(game_data.map) * game_data.img_width,
			map_line_counter(game_data.map) * game_data.img_height, "so_long");
	ss_loading_elements_images(&game_data);
	mlx_hook(game_data.window, 2, 1L << 0, move_player, &game_data);
	mlx_hook(game_data.window, 17, 0, close_window, NULL);
	mlx_loop(game_data.root);
	mlx_destroy_window(game_data.root, game_data.window);
	mlx_destroy_display(game_data.root);
}
