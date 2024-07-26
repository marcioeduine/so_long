/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:59:00 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:59:03 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ss_map(t_game *game_data)
{
	int	i;
	int	j;

	game_data->map = ft_split(game_data->map_file_content, '\n');
	if (!game_data->map)
		return (0);
	i = -1;
	j = -1;
	while (game_data->map[0][++i])
		if (game_data->map[0][i] != '1')
			return (0);
	while (game_data->map[++j])
		if (game_data->map[j][0] != '1')
			return (0);
	i = -1;
	while (game_data->map[j - 1][++i])
		if (game_data->map[j - 1][i] != '1')
			return (0);
	i--;
	while (--j)
		if (game_data->map[j - 1][i] != '1')
			return (0);
	return (1);
}
