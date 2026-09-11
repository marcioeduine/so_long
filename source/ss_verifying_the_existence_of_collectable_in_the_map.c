/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ss_verifying_the_existence_of_collectab...       :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/07/24 15:47:00 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/07/24 15:47:01 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_verifying_the_existence_of_collectable_in_the_map(char *map)
{
	unsigned int	counter;
	int				i;

	i = -1;
	counter = 0;
	while (map[++i])
		if (map[i] == 'C')
			counter++;
	if (counter < 1)
	{
		ft_putstr_fd("The current map does not contain a (C) collectable\n", 1);
		ft_putstr_fd("at least, therefore, it is an invalid map.\n", 1);
		exit(0);
	}
}
