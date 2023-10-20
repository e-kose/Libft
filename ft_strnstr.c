/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:25:47 by ekose             #+#    #+#             */
/*   Updated: 2023/10/20 14:28:54 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while ((haystack[i + j] == needle[j]) && (haystack[i + j]))
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
		j = 0;
	}
	return (0);
}
