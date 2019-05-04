#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkStack.h"
void Init(LinkStack *s){
	s->top = NULL;
	s->count = 0;
}

int Push(LinkStack *s, int elem){
	LinkStackPtr p;
	p = (LinkStackPtr)malloc(sizeof(StackNode));
	p->data = elem;
	p->next = s->top;
	s->top = p;
	s->count++;
	return 1;
}

int Pop(LinkStack *s, int elem){
	if (s->count == 0){
		printf("ERROR");
		return 0;
	}
	LinkStackPtr p;
	elem = s->top->data;
	p = s->top;
	s->top = s->top->next;
	free(p);
	s->count--;
	return elem;
}