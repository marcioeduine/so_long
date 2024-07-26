/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_searching_invalid_elements_in_the_map.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:58:15 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/24 13:58:16 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_searching_invalid_elements_in_the_map(char *map)
{
	int	i;

	i = -1;
	while (map[++i])
	{
		if (map[i] != '\0' && map[i] != '0' && map[i] != '1' && map[i] != 'E')
		{
			if (map[i] != 'C' && map[i] != 'P' && map[i] != '\n')
			{	
				ft_putstr_fd("There is invalid element in the map,\n", 1);
				ft_putstr_fd("therefore, it is an invalid map.\n", 1);
				exit(0);
			}
		}
	}
}
