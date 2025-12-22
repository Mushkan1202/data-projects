
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *top = NULL
void push(int value) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Stack Overflow\n");
    } else {
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        printf("%d pushed into stack\n", value);
    }
}
void pop() {
    struct node *temp;
    if (top == NULL) {
        printf("Stack Underflow\n");
    } else {
        temp = top;
        printf("%d popped from stack\n", top->data);
        top = top->next;
        free(temp);
    }
}
void display() {
    struct node *temp;
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        temp = top;
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
