

#include <stdio.h>


int main()
{
	int i[] = {100, 200, 300 ,400 ,500};

	int *ptr = i+2;


	printf("ptr[-2] = %d\n", ptr[-2]);
	printf("ptr[-1] = %d\n", ptr[-1]);
	printf("ptr[0] = %d\n", ptr[0]);
	printf("ptr[1] = %d\n", ptr[1]);
	printf("ptr[-2] = %d\n", ptr[2]);

}
