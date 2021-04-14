#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX 5
int stack[MAX], pos = -1;
void push(int input);
void pop();
int top();
int size();
int main() {
    char op[10];
    while (scanf("%s", op) != EOF) {
        if (strcmp(op, "push") == 0) {
            int input;
            scanf("%d", &input);
            push(input);
        } else if (strcmp(op, "pop") == 0) {
            pop();
        } else if (strcmp(op, "top") == 0) {
            printf("%d\n", top());
        } else if (strcmp(op, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(op, "exit") == 0) {
            puts("bye bye!!!");
            exit(0);
        }
    }
    return 0;
}
void push(int input) {
    pos++;
    stack[pos] = input;
}
void pop() {
    pos--;
}
int top() {
    return stack[pos];
}
int size() {
    return pos+1;
}