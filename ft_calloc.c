/*########       ##    ##  #######   ######  ########
##               ##   ##  ##     ## ##    ## ##
##               ##  ##   ##     ## ##       ##
######  #######  #####    ##     ##  ######  ######
##               ##  ##   ##     ##       ## ##
##               ##   ##  ##     ## ##    ## ##
########         ##    ##  #######   ######  ########*/


#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*p;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	s = size * count;
	p = malloc(s);
	if (p == NULL)
		return (0);
	ft_bzero (p, s);
	return (p);
}
