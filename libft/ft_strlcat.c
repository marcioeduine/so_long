/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ft_strlcat.c                                     :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/05/15 14:44:10 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/05/17 03:23:56 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	column;

	index = 0;
	column = 0;
	while (dst[index] && size > index)
		index++;
	while (src[column] && size > (index + column + 1))
	{
		dst[index + column] = src[column];
		column++;
	}
	if (size > index)
		dst[index + column] = '\0';
	return (index + ft_strlen(src));
}
