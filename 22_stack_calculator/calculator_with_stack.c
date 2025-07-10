#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 99999999

typedef struct Node {
    char data[100];
    struct Node* next;
}Node;

typedef struct Stack {
    Node* top;
}Stack;

void push(Stack* stack, char* data) {
    Node* node = (Node*)malloc(sizeof(Node));
    strcpy(node->data, data);
    node->next = stack->top;
    stack->top = node;
}

char* getTop(Stack* stack) {
    return stack->top ? stack->top->data : NULL;
}

char* pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("스택언더플로우가발생했습니다.\n");
        return NULL;
    }
    Node* node = stack->top;
    char* data = (char*)malloc(strlen(node->data) + 1);
    strcpy(data, node->data);
    stack->top = node->next;
    free(node);
    return data;
}

int getPriority(char* i) {
    if (!strcmp(i, "(")) return 0;
    if (!strcmp(i, "+") || !strcmp(i, "-")) return 1;
    if (!strcmp(i, "*") || !strcmp(i, "/")) return 2;
    return 3;
}

char* transition(Stack* stack, char** s, int size) {
    char* res = (char*)malloc(1000);
    res[0] = '\0';

    for (int i = 0; i < size; i++) {
        if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
            while (stack->top && getPriority(getTop(stack)) >= getPriority(s[i])) {
                char* op = pop(stack);
                strcat(res, op);
                strcat(res, " ");
                free(op);
            }
            push(stack, s[i]);
        }
        else if (!strcmp(s[i], "(")) {
            push(stack, s[i]);
        }
        else if (!strcmp(s[i], ")")) {
            while (stack->top && strcmp(getTop(stack), "(")) {
                char* op = pop(stack);
                strcat(res, op);
                strcat(res, " ");
                free(op);
            }
            char* discard = pop(stack);  // "(" 제거
            free(discard);
        }
        else {
            strcat(res, s[i]);
            strcat(res, " ");
        }
    }

    while (stack->top) {
        char* op = pop(stack);
        strcat(res, op);
        strcat(res, " ");
        free(op);
    }

    return res;
}

void calculate(Stack* stack, char** s, int size) {
    for (int i = 0; i < size; i++) {
        if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
            int x = atoi(pop(stack));
            int y = atoi(pop(stack));
            int z = 0;
            if (!strcmp(s[i], "+")) z = y + x;
            else if (!strcmp(s[i], "-")) z = y - x;
            else if (!strcmp(s[i], "*")) z = y * x;
            else if (!strcmp(s[i], "/")) z = y / x;
            char buffer[100];
            sprintf(buffer, "%d", z);
            push(stack, buffer);
        }
        else {
            push(stack, s[i]);
        }
    }
    char* result = pop(stack);
    if (result) {
        printf("%s\n", result);
        free(result);
    }
}

int main(void) {
    Stack stack;
    stack.top = NULL;
    char a[100] = "( ( 3 + 4 ) * 5 ) - 5 * 7 * 5 - 5 * 10";
    int size = 1;
    for (int i = 0; i < (int)strlen(a); i++) {
        if (a[i] == ' ') size++;
    }

    char* ptr = strtok(a, " ");
    char** input = (char**)malloc(sizeof(char*) * size);
    for (int i = 0; i < size; i++) {
        input[i] = (char*)malloc(100);
    }
    for (int i = 0; i < size; i++) {
        strcpy(input[i], ptr);
        ptr = strtok(NULL, " ");
    }

    char* b = transition(&stack, input, size);
    printf("후위표기법: %s\n", b);

    size = 1;
    for (int i = 0; i < (int)strlen(b) - 1; i++) {
        if (b[i] == ' ') size++;
    }

    ptr = strtok(b, " ");
    for (int i = 0; i < size; i++) {
        strcpy(input[i], ptr);
        ptr = strtok(NULL, " ");
    }
    free(b);

    calculate(&stack, input, size);

    system("pause");
    return 0;
}
