/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:34:56 by ekose             #+#    #+#             */
/*   Updated: 2023/10/20 14:13:39 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// void aupper(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z' )
// 		*c -= 32;
// }
// int main()
// {
// 	char a[]="ertu";
// 	ft_striteri(a,aupper);
// 	printf("%s",a);
// }
