/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ft_memmove.c                                     :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/05/15 14:08:22 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/05/15 14:16:01 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*sr;
	char	*ds;

	i = len;
	ds = (char *)dest;
	sr = (char *)src;
	if (dest == src)
		return (dest);
	else if (ds > sr)
	{
		while (i > 0)
		{
			i--;
			ds[i] = sr[i];
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (ds);
}
