/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:38:19 by ekose             #+#    #+#             */
/*   Updated: 2023/10/20 14:11:31 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main()
// {
// 	int fp;
// 	fp = open("Deneme1.txt",O_CREAT | O_RDWR | O_APPEND , 0700);
// 	ft_putendl_fd("dadla",fp);
// 	close(fp);
// }
