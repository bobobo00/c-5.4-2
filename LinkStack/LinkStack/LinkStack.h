#ifndef _LINKSTACK_H_
#define _LINKSTACK_H_

#include <stdio.h>
#include <windows.h>

typedef struct StackNode {
	int data;
	struct StackNode *next;
}*LinkStackPtr,StackNode;
typedef struct Linkstack{
	LinkStackPtr top;
	int count;
}LinkStack;

void Init(LinkStack *s);
int Push(LinkStack *s, int elem);
int Pop(LinkStack *s, int elem);

#endif