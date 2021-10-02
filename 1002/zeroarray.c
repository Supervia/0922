#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("몇개 입력?\n");
	scanf_s("%d", &a);
	int *arr1 = (int*)malloc(sizeof(int) * a);
	int *arr2 = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++) {
		scanf_s("%d", &b);
		arr1[i] = b;
	}

	int j = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr1[i] != 0) {
			arr2[j] = arr1[i];
			j = j + 1;
		}
	}
	for (int i = j; i < a; i++)
		arr2[i] = 0;
	for (int i = 0; i < a; i++)
		printf("%d, ", arr2[i]);

	return 0;
}