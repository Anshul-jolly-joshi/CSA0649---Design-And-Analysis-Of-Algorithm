#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert_number(struct Node** head, int value) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}

void print_list(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insert_number(&head, 5);
    insert_number(&head, 10);
    insert_number(&head, 15);

    printf("List after insertion: ");
    print_list(head);

    return 0;
}
