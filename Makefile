# **************************************************************************** #
#                                                                              #
#                                                        ::::::::   ::::::::   #
#    Makefile                                          :+:    :+: :+:    :+:   #
#                                                     +:+        +:+           #
#    By: Ser Superior <marcioeduine@gmail.com>       +#++:++#++ +#++:++#++     #
#                                                          +#+        +#+      #
#    Created: 2024/07/26 07:31:38 by Ser Superior  #+#    #+# #+#    #+#       #
#    Updated: 2024/07/26 07:31:41 by Ser Superior  ########   ########         #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
CC = cc
CFLAGS	= -Wall -Wextra -Werror
SRC	= source/main.c \
	source/so_long.c \
	source/open_file.c \
	source/close_window.c \
	source/move_player.c \
	source/map_line_counter.c \
	source/map_column_counter.c \
	source/free_map.c \
	source/ss_map.c \
	source/ss_flood_fill.c \
	source/ss_loading_elements_images.c \
	source/ss_searching_invalid_elements_in_the_map.c \
	source/ss_searching_valid_path_in_the_map.c \
	source/ss_searching_player_duplication_in_the_map.c \
	source/ss_searching_exit_duplication_in_the_map.c \
	source/ss_searching_collectable_in_the_map.c \
	source/ss_verifying_the_existence_of_collectable_in_the_map.c \
	source/ss_verifying_the_elements_in_the_map.c \
	source/ss_verifying_game_elements.c \
	source/ss_verifying_initial_errors.c \
	source/ss_verifying_maps_structure.c \
	source/ss_duplicating_map.c \
	source/ss_exit_game.c \
	source/ss_step_counter.c \
	source/ss_setting_element_images.c
OBJ	= $(SRC:.c=.o)
MLX	= -L./minilibx-linux -lmlx_Linux -lXext -lX11 -lm
LIBFT = libft/libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	make -C libft
	make -C minilibx-linux
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(MLX) -o $(NAME)

clean:
	make clean -C libft
	make clean -C minilibx-linux
	@rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	@rm -f $(NAME)

re: fclean all
