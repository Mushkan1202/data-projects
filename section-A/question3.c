
 #include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Head pointer
struct Node *head = NULL;

// Insert at beginning
void insert(int value) {
    struct Node *newNode;

    // Allocate memory
    newNode = (struct Node *)malloc(sizeof(struct Node));

    // Store data
    newNode->data = value;

    // New node previous is NULL
    newNode->prev = NULL;

    // New node next points to current head
    newNode->next = head;

    // If list is not empty, update previous of old head
    if (head != NULL) {
        head->prev = newNode;
    }

    // Update head
    head = newNode;
}

// Display forward
void displayForward() {
    struct Node *temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Display backward
void displayBackward() {
    struct Node *temp = head;

    // Move to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    printf("Backward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    displayForward();
    displayBackward();

    return 0;
}





