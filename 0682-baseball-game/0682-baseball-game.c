#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define MAX 1000

typedef struct {
    int data[MAX];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (s->top == MAX - 1) {return;} 
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        return 0; 
    }
    return s->data[s->top--];
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        return 0; 
    }
    return s->data[s->top];
}

int calPoints(char **operations, int n) {
    Stack s;
    initStack(&s);
    for (int i = 0; i < n; i++) {
        if (strcmp(operations[i], "+") == 0) {
            int op2 = pop(&s);
            int op1 = pop(&s);
            int sum = op1 + op2;
            push(&s, op1);
            push(&s, op2);
            push(&s, sum);
        } 
        else if (strcmp(operations[i], "D") == 0) {
            int top = peek(&s);
            push(&s, 2 * top);
        } 
        else if (strcmp(operations[i], "C") == 0) {
            pop(&s);
        } 
        else {
            int val = atoi(operations[i]);
            push(&s, val);
        }
    }
    int sum = 0;
    while (!isEmpty(&s)) {
        sum += pop(&s);
    }
    return sum;
}
