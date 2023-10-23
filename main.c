#include "libft.h"

int main()
{
	int a[] = {13};
	ft_memset(a,255,1);
	printf("%d\n",a[0]);

	///////////////////////////////////////////

	char b[] = "Ertu";
	ft_bzero(b,5);
	printf("%s\n",b);
	///////////////////////////////////////////

	char c[] = "ertu";
	char d[20] ;
	ft_memcpy(d,c,2);
	printf("%s\n",d);
	///////////////////////////////////////////

	char text[] = "Hello, World!";
    ft_memmove(text + 7, text, 7);
	printf("Text: %s\n", text);
	/////////////////////////////////////////
	int i = 0;
	char *p=ft_strdup("Ertuğrul nasılsın");
	char **z=ft_split(p,' ');
	while(d[i])
	{
		printf("%dindex: %s \n",i,z[i]);
		i++;
	}
	///////////////////////////////////////7
	
}
