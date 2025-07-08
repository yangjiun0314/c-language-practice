#include <stdio.h>
#include <stdlib.h>
#define _CRT_SCURE_NO_WARNINGS
#define SIZE 10000
#define INF 99999999

int stack[SIZE];
int top = -1;

//연결 리스트를 이용해 스택 구현
typedef struct Node{
	int data;
	struct Node* next;
}Node;

typedef struct {
	Node* top;
}Stack;

//스택의 삽입 함수
void push(Stack* stack, int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = stack->top;
	stack->top = node;
}

//스택의 추출 함수
int pop(Stack* stack) {
	if (stack->top == NULL) {
		printf("스택 언더플로우가 발생했습니다.\n");
		return-INF;
	}
	Node* node = stack->top;
	int data = node->data;
	stack->top = node->next;
	free(node);
	return data;
}

//스택 전체 출력 함수
void show(Stack* stack) {
	Node* cur = stack->top;
	printf("--- 스택의 최상단---\n");
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("--- 스택의 최하단---\n");
}

//완성된 스택 사용하기
int main(void) {
	Stack stack;
	stack.top = NULL;
	show(&stack);
	push(&stack, 7);
	push(&stack, 5);
	push(&stack, 4);
	pop(&stack);
	push(&stack, 6);
	pop(&stack);
	show(&stack);
	system("pause");
	return 0;
}