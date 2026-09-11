/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ss_searching_collectable_in_the_map.c            :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/07/24 13:57:43 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/07/24 13:57:45 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ss_searching_collectable_in_the_map(t_game *game_data)
{
	int	i;
	int	j;

	i = -1;
	while (game_data->map[++i])
	{
		j = -1;
		while (game_data->map[i][++j])
			if (game_data->map[i][j] == 'C')
				return (1);
	}
	return (0);
}
