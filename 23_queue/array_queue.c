#include <stdio.h>
#define SIZE 10000
#define INF 99999999

int queue[SIZE];
int front = 0;
int rear = 0;

//큐 삽입 함수
void push(int data) {
	if (rear >= SIZE) {
		printf("큐 오버플로우가 발생했습니다.");
		return;
	}
	queue[rear++] = data;
}

//큐 추출 함수
int pop() {
	if (front == rear) {
		printf("큐 언더플로우가 발생했습니다.");
		return -INF;
	}
	return queue[front++];
}

//큐 전체 함수 보기
void show() {
	printf("--- 큐의 앞 ---\n");
	for (int i = front; i < rear; i++) {
		printf("%d\n", queue[i]);
	}
	printf("--- 큐의 뒤 ---\n");
}

//메인 함수
int main(void) {
	push(7);
	push(5);
	push(4);
	pop();
	push(6);
	pop();
	show();
	return 0;
}