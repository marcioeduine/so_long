/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:24:31 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 14:24:34 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../minilibx-linux/mlx.h"
# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

# define ESC 65307
# define UP 65362
# define DOWN 65364
# define LEFT 65361
# define RIGHT 65363
# define KEY_W 119
# define KEY_S 115
# define KEY_A 97
# define KEY_D 100

# ifndef FT_BOOLEAN_H
#  define FT_BOOLEAN_H

typedef int	t_bool;

#  define TRUE	1
#  define FALSE	0

# endif

typedef struct s_game
{
	void	*root;
	void	*window;
	void	*img_player1;
	void	*img_player2;
	void	*img_collectable;
	void	*img_background;
	void	*img_wall;
	void	*img_exit;
	int		img_width;
	int		img_height;
	char	*file_name;
	char	*map_file_content;
	char	**map;
	int		dir;
	int		step;
}	t_game;

void	so_long(char *s);
void	open_file(char *file_name, t_game *game_data);
void	free_map(char **map, int rows);
void	ss_exit_game(char *s);
void	ss_flood_fill(char **map, int x, int y, t_bool *has_valid_path);
void	ss_loading_elements_images(t_game *game_data);
void	ss_searching_invalid_elements_in_the_map(char *map);
void	ss_searching_valid_path_in_the_map(t_game *game_data, char c);
void	ss_searching_player_duplication_in_the_map(char *map);
void	ss_searching_exit_duplication_in_the_map(char *map);
void	ss_verifying_the_existence_of_collectable_in_the_map(char *map);
void	ss_verifying_the_elements_in_the_map(char *map);
void	ss_verifying_game_elements(t_game *game_data, int i, int j);
void	ss_verifying_initial_errors(char *s, t_game *game_data);
void	ss_setting_element_images(t_game *game_data);
void	ss_step_counter(t_game *game_data);

char	**ss_duplicating_map(char **map, int rows, int i);

int		ss_verifying_maps_structure(char **map, int *lines, int *columns);
int		map_line_counter(char **map);
int		map_column_counter(char **map);
int		ss_map(t_game *game_data);
int		ss_searching_collectable_in_the_map(t_game *game_data);
int		close_window(void *game_data);
int		move_player(int key, t_game *game_data);

#endif
