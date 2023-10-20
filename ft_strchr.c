/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:33:32 by ekose             #+#    #+#             */
/*   Updated: 2023/10/11 12:33:32 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if ((char)c == s[i])
		return ((char *)s + i);
	return (0);
}
// int main () {
//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = '\0';

//    printf("String after |%c| is - |%s|\n", ch, ft_strchr(str, ch));

//    return(0);
//}
