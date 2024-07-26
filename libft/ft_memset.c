/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaquart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:16:26 by mcaquart          #+#    #+#             */
/*   Updated: 2024/05/15 13:16:57 by mcaquart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	if (s == NULL)
		return (NULL);
	while (n-- > 0)
		*(((unsigned char *) s++)) = (unsigned char)c;
	return (s);
}
