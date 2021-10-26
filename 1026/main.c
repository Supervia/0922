#include "func.h"

#define N 4
#define M 5
int n = N, m = M;
int fx, fy;
int visited[N][M];

int isReachable(int maze[N][M])
{
	int i = 0, j = 0;
	Stack stack;
	StackInit(&stack);
	Data temp;
	temp.x = i;
	temp.y = j;
	temp.dir = 0;
	push(&stack, temp);
	while (!isEmpty(&stack)) {
		temp = pop(&stack);
		int d = temp.dir;
		i = temp.x, j = temp.y;
		temp.dir++;
		push(&stack, temp);
		if (i == fx && j == fy) {
			printStack(&stack);
			return TRUE;
		}
		if (d == 0) { //UP
			if (i - 1 >= 0 && maze[i - 1][j] && visited[i - 1][j]) {
				Data temp1;
				temp1.x = i - 1;
				temp1.y = j;
				temp1.dir = 0;
				visited[i - 1][j] = FALSE;
				push(&stack, temp1);
			}
		}
		else if (d == 1) { // LEFT
			if (j - 1 >= 0 && maze[i][j - 1] && visited[i][j - 1]) {
				Data temp1;
				temp1.x = i;
				temp1.y = j - 1;
				temp1.dir = 0;
				visited[i][j - 1] = FALSE;
				push(&stack, temp1);
			}
		}
		else if (d == 2) { // DOWN
			if (
				i + 1 < n && maze[i + 1][j] && visited[i + 1][j]) {
				Data temp1;
				temp1.x = i + 1;
				temp1.y = j;
				temp1.dir = 0;
				visited[i + 1][j] = FALSE;
				push(&stack, temp1);
			}
		}
		else if (d == 3) { // RIGHT
			if (j + 1 < m && maze[i][j + 1] && visited[i][j + 1]) {
				Data temp1;
				temp1.x = i;
				temp1.y = j + 1;
				temp1.dir = 0;
				visited[i][j + 1] = FALSE;
				push(&stack, temp1);
			}
		}
		else {
			visited[temp.x][temp.y] = TRUE;
			temp = pop(&stack);
		}
	}
	return FALSE;
}
int main()
{
	memset(visited, TRUE, sizeof(visited));
	int maze[N][M] = {
	{ 1, 0, 1, 1, 0 },
	{ 1, 1, 1, 0, 1 },
	{ 0, 1, 0, 1, 1 },
	{ 1, 1, 1, 1, 1 }
	};
	fx = 2;
	fy = 3;
	if (isReachable(maze)) {
		printf("Path Found!\n");
	}
	else
		printf("Path Not Found!\n");
	return 0;
}