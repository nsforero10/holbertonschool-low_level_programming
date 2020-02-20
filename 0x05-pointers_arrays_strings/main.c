#include <stdio.h>

int main()
{
	char x[5];
	printf("%p\n",x);
	printf("%p\n",x+1);
	printf("%p\n",&x);
	printf("%p\n",&x+1);
	return (0);

}
