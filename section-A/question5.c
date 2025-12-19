#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtBeginning(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
    }
    
    else {
        struct Node *temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}
void display() {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}
int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    display();

    return 0;
}

