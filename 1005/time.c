#include <stdio.h>

int main() {
	int count = 0;
	int h = 0;
	int i = 0, j = 0, k = 0;
	scanf_s("%d", &h);
	for (i = 0; i < h; i++) {
		for (j = 0; j < 60; j++) {
			for (k = 0; k < 60; k++) {
				if ((char)i == '3' || (char)j == '3' || (char)k == '3')
					count += 1;
			}
		}
	}
	printf(count);
	return 0;
}