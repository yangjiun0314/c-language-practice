#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* head, * tail;

void insert(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    Node* cur = head->next;
    while (cur != tail && cur->data < data) {
        cur = cur->next;
    }
    Node* prev = cur->prev;
    prev->next = node;
    node->prev = prev;
    node->next = cur;
    cur->prev = node;
}

void removeFront() {
    if (head->next == tail) return;
    Node* node = head->next;
    head->next = node->next;
    node->next->prev = head;
    free(node);
}

void show() {
    Node* cur = head->next;
    while (cur != tail) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main(void) {
    head = (Node*)malloc(sizeof(Node));
    tail = (Node*)malloc(sizeof(Node));

    head->next = tail;
    head->prev = NULL;
    tail->prev = head;
    tail->next = NULL;

    insert(2);
    insert(1);
    insert(3);
    insert(9);
    insert(7);

    removeFront(); // 1 삭제
    show(); // 출력: 2 3 7 9

    free(head);
    free(tail);
    return 0;
}
