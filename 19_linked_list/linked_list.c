#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head;

void addFront(Node* root, int data) {
    if (root == NULL) return;
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) return;

    node->data = data;
    node->next = root->next;
    root->next = node;
}

void removeFront(Node* root) {
    if (root == NULL || root->next == NULL) return;

    Node* front = root->next;
    root->next = front->next;
    free(front);
}

void showAll(Node* root) {
    Node* cur = root->next;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

void freeAll(Node* root) {
    Node* cur = root->next;
    while (cur != NULL) {
        Node* next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    head = (Node*)malloc(sizeof(Node));
    if (head == NULL) return 1;

    head->next = NULL;

    addFront(head, 2);
    addFront(head, 1);
    addFront(head, 7);
    addFront(head, 9);
    addFront(head, 8);
    removeFront(head);
    showAll(head);
    freeAll(head);
    free(head);
    return 0;
}
