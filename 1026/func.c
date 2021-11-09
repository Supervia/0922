#include "func.h"

void StackInit(Stack* sp) {
	sp->top = -1;
}
int isEmpty(Stack* sp) {
	if (sp->top == -1) return TRUE;
	return FALSE;
}
void push(Stack* sp, Data data) {
	if ((sp->top) + 1 >= MAX_LEN) return;
	sp->arr[++(sp->top)] = data;
}
Data pop(Stack* sp) {
	Data data;
	data.x = -1;
	data.y = -1;
	data.dir = -1;
	if (isEmpty(sp)) return data;
	return sp->arr[(sp->top)--];
}
void printStack(Stack* sp) {
	printf("Stack: ");
	for (int i = 0; i < (sp->top) + 1; i++) {
		printf("(%d, %d, %d) ", sp->arr[i].x, sp->arr[i].y, sp->arr[i].dir);
	}
	printf("\n");
}
