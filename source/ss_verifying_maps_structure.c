/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ss_verifying_maps_structure.c                    :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/07/24 13:56:32 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/07/24 13:56:39 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ss_verifying_maps_structure(char **map, int *lines, int *columns)
{
	int	i;
	int	curr_columns;

	*lines = 0;
	*columns = 0;
	if (!map)
		return (-1);
	while (map[*lines])
	{
		curr_columns = 0;
		i = -1;
		while (map[*lines][++i])
			curr_columns++;
		if (*lines == 0)
			*columns = curr_columns;
		else if (curr_columns != *columns)
			return (-1);
		(*lines)++;
	}
	return (0);
}
