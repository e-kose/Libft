/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:47:58 by ekose             #+#    #+#             */
/*   Updated: 2023/10/14 19:34:55 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*sourc;

	i = 0;
	dest = (char *)dst;
	sourc = (char *)src;
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dest);
}
// int main () {
//    const char src[50] = "ertu";
//    char dest[3]="";
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, 4);
//    printf("After memcpy dest = %s\n", dest);
//    //memcpy(dest, src, 4);
//     printf("\nAfter memcpy dest = %s\n", dest);

//    return(0);
// }
