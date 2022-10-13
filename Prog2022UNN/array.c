#include <stdio.h>
#include <math.h>

int main()
{

	int size = 0, n_pow = 2;
	int arr[10000];

	while (size <= 0 || size > 10000)
	{
		printf("Input count of array: ");
		scanf_s("%d", &size);
	}

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 - 10;
	}
	for (int i = 0; i < size; i++)
	{
		prinf("%d\n", arr[i]);
	}

	printf("\nInput size of power: ");
	scanf_s("%d", &n_pow);




	return 0;
}