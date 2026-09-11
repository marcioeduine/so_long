/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    free_map.c                                       :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/07/24 13:58:06 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/07/24 13:58:10 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	free_map(char **map, int rows)
{
	int	i;

	i = -1;
	while (++i < rows)
		free(map[i]);
	free(map);
}
