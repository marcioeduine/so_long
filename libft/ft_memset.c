/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ft_memset.c                                      :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/05/15 13:16:26 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/05/15 13:16:57 by Ser Superior ########   ########        */
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
