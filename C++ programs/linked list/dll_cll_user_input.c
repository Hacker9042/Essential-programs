#include <stdio.h>
#include <stdlib.h>

// Structure for a node in doubly linked list
struct DLLNode {
    int data;
    struct DLLNode* prev;
    struct DLLNode* next;
};

// Structure for a node in circular linked list
struct CLLNode {
    int data;
    struct CLLNode* next;
};

// Function to create a new node for doubly linked list
struct DLLNode* createDLLNode(int data) {
    struct DLLNode* newNode = (struct DLLNode*)malloc(sizeof(struct DLLNode));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to create a new node for circular linked list
struct CLLNode* createCLLNode(int data) {
    struct CLLNode* newNode = (struct CLLNode*)malloc(sizeof(struct CLLNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of doubly linked list
void insertDLLNodeAtBegin(struct DLLNode** head, int data) {
    struct DLLNode* newNode = createDLLNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to insert a new node at the end of doubly linked list
void insertDLLNodeAtEnd(struct DLLNode** head, int data) {
    struct DLLNode* newNode = createDLLNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct DLLNode* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function to delete a node from doubly linked list
void deleteDLLNode(struct DLLNode** head, int data) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct DLLNode* current = *head;
    struct DLLNode* prev = NULL;

    // Check if the head node contains the data
    if (current != NULL && current->data == data) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        printf("Node with data %d deleted successfully.\n", data);
        return;
    }

    // Search for the node to be deleted
    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Node with data %d not found.\n", data);
        return;
    }

    // Update the links
    prev->next = current->next;
    if (current->next != NULL) {
        current->next->prev = prev;
    }

    free(current);
    printf("Node with data %d deleted successfully.\n", data);
}

// Function to insert a new node at the beginning of circular linked list
void insertCLLNodeAtBegin(struct CLLNode** head, int data) {
    struct CLLNode* newNode = createCLLNode(data);
    if (*head == NULL) {
        newNode->next = newNode; // Point to itself for circular list
        *head = newNode;
    } else {
        struct CLLNode* current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = *head;
        *head = newNode;
    }
}

// Function to insert a new node at the end of circular linked list
void insertCLLNodeAtEnd(struct CLLNode** head, int data) {
    struct CLLNode* newNode = createCLLNode(data);
    if (*head == NULL) {
        newNode->next = newNode; // Point to itself for circular list
        *head = newNode;
    } else {
        struct CLLNode* current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = *head;
    }
}

// Function to delete a node from circular linked list
void deleteCLLNode(struct CLLNode** head, int data) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct CLLNode* current = *head;
    struct CLLNode* prev = NULL;

    // Search for the node to be deleted
    do {
        if (current->data == data) {
            if (current->next == *head) {
                *head = (*head)->next;
                prev->next = *head;
            } else if (current == *head) {
                struct CLLNode* temp = *head;
                while (temp->next != *head) {
                    temp = temp->next;
                }
                *head = (*head)->next;
                temp->next = *head;
            } else {
                prev->next = current->next;
            }
            free(current);
            printf("Node with data %d deleted successfully.\n", data);
            return;
        }
        prev = current;
        current = current->next;
    } while (current != *head);

    printf("Node with data %d not found.\n", data);
}

// Function to display the doubly linked list
void displayDLL(struct DLLNode* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct DLLNode* current = head;
    printf("Doubly Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to display the circular linked list
void displayCLL(struct CLLNode* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct CLLNode* current = head;
    printf("Circular Linked List: ");
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

int main() {
    struct DLLNode* dllHead = NULL;
    struct CLLNode* cllHead = NULL;

    int choice;
    int data;
    int deleteData;

    while (1) {
        printf("1. Insert in Doubly Linked List (at beginning)\n");
        printf("2. Insert in Doubly Linked List (at end)\n");
        printf("3. Delete from Doubly Linked List\n");
        printf("4. Insert in Circular Linked List (at beginning)\n");
        printf("5. Insert in Circular Linked List (at end)\n");
        printf("6. Delete from Circular Linked List\n");
        printf("7. Display Doubly Linked List\n");
        printf("8. Display Circular Linked List\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insertDLLNodeAtBegin(&dllHead, data);
                break;
            case 2:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insertDLLNodeAtEnd(&dllHead, data);
                break;
            case 3:
                printf("Enter the data to be deleted: ");
                scanf("%d", &deleteData);
                deleteDLLNode(&dllHead, deleteData);
                break;
            case 4:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insertCLLNodeAtBegin(&cllHead, data);
                break;
            case 5:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insertCLLNodeAtEnd(&cllHead, data);
                break;
            case 6:
                printf("Enter the data to be deleted: ");
                scanf("%d", &deleteData);
                deleteCLLNode(&cllHead, deleteData);
                break;
            case 7:
                displayDLL(dllHead);
                break;
            case 8:
                displayCLL(cllHead);
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    }

    return 0;
}