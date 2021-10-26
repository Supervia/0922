#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 1000
#define TRUE 1
#define FALSE 0

typedef struct _data {
	int x;
	int y;
	int dir;
} Data;

typedef struct _stack {
	Data arr[MAX_LEN];
	int top;
} Stack;

void StackInit(Stack* sp);
int isEmpty(Stack* sp);
Data pop(Stack* sp);
void printStack(Stack* sp);