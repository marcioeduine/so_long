/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   ::::::::  */
/*    ft_putstr_fd.c                                   :+:    :+: :+:    :+:  */
/*                                                    +:+        +:+          */
/*    By: Ser Superior <marcioeduine@gmail.com>      +#++:++#++ +#++:++#++    */
/*                                                         +#+        +#+     */
/*    Created: 2024/05/14 11:27:42 by Ser Superior #+#    #+# #+#    #+#      */
/*    Updated: 2024/05/15 13:44:20 by Ser Superior ########   ########        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		ft_putstr_fd("(null)\n", fd);
	write(fd, s, ft_strlen(s));
}
