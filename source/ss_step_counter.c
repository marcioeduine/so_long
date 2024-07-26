/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_step_counter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:55:11 by mcaquart          #+#    #+#             */
/*   Updated: 2024/07/26 17:55:13 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	ss_step_counter(t_game *game_data)
{
	ft_putstr_fd("Steps: ", 1);
	ft_putnbr_fd(game_data->step++, 1);
	ft_putchar_fd('\n', 1);
}
