/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:11:06 by ekose             #+#    #+#             */
/*   Updated: 2023/10/20 16:45:03 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (dst > src)
	{
		while (len--)
		{
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
		}
	}
	else
	{
		i = 0;
		while (len--)
		{
			*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
			i++;
		}
	}
	return (dst);
}
