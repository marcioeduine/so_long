/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ss_setting_element_images.c                      :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/07/25 23:25:26 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/07/25 23:25:29 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_setting_element_images(t_game *game_data)
{
	game_data->img_player1 = mlx_xpm_file_to_image(game_data->root,
			"./textures/player.xpm", &game_data->img_width,
			&game_data->img_height);
	game_data->img_player2 = mlx_xpm_file_to_image(game_data->root,
			"./textures/player2.xpm", &game_data->img_width,
			&game_data->img_height);
	game_data->img_collectable = mlx_xpm_file_to_image(game_data->root,
			"./textures/collect.xpm", &game_data->img_width,
			&game_data->img_height);
	game_data->img_background = mlx_xpm_file_to_image(game_data->root,
			"./textures/space.xpm", &game_data->img_width,
			&game_data->img_height);
	game_data->img_wall = mlx_xpm_file_to_image(game_data->root,
			"./textures/wall.xpm", &game_data->img_width,
			&game_data->img_height);
	game_data->img_exit = mlx_xpm_file_to_image(game_data->root,
			"./textures/exit.xpm", &game_data->img_width,
			&game_data->img_height);
}
