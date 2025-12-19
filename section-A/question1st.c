#include <stdio.h>
#define MAX 10

int data[MAX];
int nextNode[MAX];
int head = -1;
int freePos = 0;

void insert(int value) {
    if (freePos == MAX) {
        printf("List is full\n");
        return;
    }

    data[freePos] = value;
    nextNode[freePos] = head;
    head = freePos;
    freePos++;
}

void display() {
    int temp = head;
    printf("Linked List: ");
    while (temp != -1) {
        printf("%d -> ", data[temp]);
        temp = nextNode[temp];
    }
    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    display();

    return 0;
}


	



