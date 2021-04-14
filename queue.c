#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5
int *queue, last = -1, first = 0;
void push(int n);
void pop();
int front();
int size();
int main () {
    queue = (int*) malloc(MAX*sizeof(int));
    char op[10];
    while (scanf("%s", op) != EOF) {
        if (strcmp(op, "push") == 0) {
            int input;
            scanf("%d", &input);
            push(input);
        } else if (strcmp(op, "pop") == 0) {
            pop();
        } else if (strcmp(op, "front") == 0) {
            printf("%d\n", front());
        } else if (strcmp(op, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(op, "exit") == 0) {
            puts("bye");
            exit(0);
        }
    }
    return 0;
}
void push(int n) {
    last++;
    queue[last] = n;
}
void pop() {
    first++;
}
int front() {
    return queue[first];
}
int size() {
    return last - first + 1;
}