#include <stdio.h>

int v[9] = { 0 };
int graph[9][3] = {
	{0}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}
};

void dfs(int node) {
	v[node] = 1;
	printf("%d ", node);
	for (int j = 0; j < 3 && graph[node][j] != 0; j++) {
		if (v[graph[node][j]] != 1) {
			dfs(graph[node][j]);
		}
	}
}

int main() {
	dfs(1);
	return 0;
}