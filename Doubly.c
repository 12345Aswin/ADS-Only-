#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head = NULL; // Use a global head pointer

struct node *create_node() {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter the data to be inserted: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void insertion_beginning() {
    struct node *new = create_node();
    if (head == NULL) {
        head = new;
    } else {
        new->next = head;
        head->prev = new;
        head = new;
    }
}

void insertion_last() {
    struct node *new = create_node();
    if (head == NULL) {
        head = new;
    } else {
        struct node *ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new;
        new->prev = ptr;
    }
}

void display() {
    int count = 0;

    if (head == NULL) {
        printf("Empty List\n");
    } else {
        printf("\n----------------------\n");
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            count++;
            ptr = ptr->next;
        }
    }
    printf("\n----------------------\n");
}

void free_memory() {
    struct node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int opt;
    do {
        printf("1. Insertion beginning\n2. Insertion last\n3. Display\n4. Exit\n");
        printf("Choose the operation number: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                insertion_beginning();
                break;
            case 2:
                insertion_last();
                break;
            case 3:
                display();
                break;
            case 4:
                free_memory();
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (opt != 4);

    return 0;
}