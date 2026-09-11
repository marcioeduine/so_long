/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    map_column_counter.c                             :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/07/24 13:55:41 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/07/24 13:55:43 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	map_column_counter(char **map)
{
	int	column;

	column = 0;
	while (map[0][column])
		column++;
	return (column);
}
