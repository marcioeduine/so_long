/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_flood_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:57:58 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:57:59 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_flood_fill(char **map, int x, int y, t_bool *has_valid_path)
{
	if (x < 0 || y < 0 || map[x][y] == '1' || map[x][y] == 'F'
			|| x >= map_line_counter(map) || y >= map_column_counter(map))
		return ;
	if (map[x][y] == 'P')
	{
		*has_valid_path = TRUE;
		return ;
	}
	map[x][y] = 'F';
	ss_flood_fill(map, x + 1, y, has_valid_path);
	ss_flood_fill(map, x - 1, y, has_valid_path);
	ss_flood_fill(map, x, y + 1, has_valid_path);
	ss_flood_fill(map, x, y - 1, has_valid_path);
}
