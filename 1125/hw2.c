#include <stdio.h>
#include <string.h>

int main() {
	
	int length;
	int count = 0;
	char arr[100];
	scanf_s("%s", arr, sizeof(arr));
	length = strlen(arr);

	for (int i = 0; i < length; i++) {
		count++;
		if (arr[i] != arr[i + 1]) {
			if (count == 1) {
				printf("%c", arr[i]);
			}
			else {
				printf("%d%c", count, arr[i]);
			}
			count = 0;
		}
	}
	return 0;
}