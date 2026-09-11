/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ft_calloc.c                                      :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/05/17 02:05:10 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/05/17 05:37:45 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(nmemb * size);
	if (ret)
		ft_bzero(ret, nmemb * size);
	return (ret);
}
