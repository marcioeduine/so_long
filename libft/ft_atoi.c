/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 00:48:31 by mcaquart          #+#    #+#             */
/*   Updated: 2024/05/17 01:57:39 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signal;
	int	result;

	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	signal = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal *= -1;
		nptr++;
	}
	result = 0;
	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
		result = (result * 10) + ((*nptr++) - '0');
	return (result * signal);
}
