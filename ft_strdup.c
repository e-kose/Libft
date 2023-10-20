/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:54:44 by ekose             #+#    #+#             */
/*   Updated: 2023/10/20 14:26:42 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*p;

	i = 0;
	while (s1[i])
		i++;
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
// #include<stdio.h>
// int main()
// {
// 	char src[]="akaa";
// 	char *c;
// 	c=ft_strdup(src);
// 	printf("%s\n",c);
// 	printf("%s",ft_strdup(src));
// }
