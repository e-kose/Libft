/*########         ##    ##  #######   ######  ########
##               ##   ##  ##     ## ##    ## ##
##               ##  ##   ##     ## ##       ##
######  #######  #####    ##     ##  ######  ######
##               ##  ##   ##     ##       ## ##
##               ##   ##  ##     ## ##    ## ##
########         ##    ##  #######   ######  ########*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sayi;
	int	isaret;

	i = 0;
	sayi = 0;
	isaret = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = sayi * 10 + (str[i] - '0');
		i++;
	}
	return (isaret * sayi);
}
