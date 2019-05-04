#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkStack.h"
int main(){
	LinkStack s;
	Init(&s);
	int elem = 0;
	int data = 0;
	scanf("%d", &elem);
	Push(&s, elem);
	int result = Pop(&s, data);
	printf("%d", result);
	system("pause");
	return 0;
}