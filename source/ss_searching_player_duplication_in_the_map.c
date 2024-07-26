/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_searching_player_duplication_in_the_map.c       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:46:52 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 15:46:54 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_searching_player_duplication_in_the_map(char *map)
{
	unsigned int	counter;
	int				i;

	i = -1;
	counter = 0;
	while (map[++i])
		if (map[i] == 'P')
			counter++;
	if (counter > 1)
	{
		ft_putstr_fd("The current map contains multiple (P) players,\n", 1);
		ft_putstr_fd("therefore, it is an invalid map.\n", 1);
		exit(0);
	}
	else if (counter < 1)
	{
		ft_putstr_fd("The current map does not contain a (P) player,\n", 1);
		ft_putstr_fd("therefore, it is an invalid map.\n", 1);
		exit(0);
	}
}
