/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_loading_elements_images.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:58:32 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:58:34 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_loading_elements_images(t_game *game_data)
{
	int	i;
	int	j;

	i = -1;
	while (game_data->map[++i])
	{
		j = -1;
		while (game_data->map[i][++j])
			ss_verifying_game_elements(game_data, i, j);
	}
}
