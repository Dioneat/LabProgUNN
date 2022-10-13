#include "stdio.h"
#include "malloc.h"

void main()
{
	char* str;
	str = (char*)malloc(sizeof(char) * 100);
	
	int size = 0;
	while (str[size] != '\0')
	{
		size++;
	}


	printf("String %s have len %d", str, size);

	/*gets(str);
	puts(str);*/

	free(str);
}