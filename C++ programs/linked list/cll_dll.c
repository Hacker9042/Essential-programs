#include <stdio.h>
#include <stdlib.h>

// Structure for a node in doubly linked list
typedef struct DLLNode {
    int data;
    struct DLLNode* prev;
    struct DLLNode* next;
}dll;

// Structure for a node in circular linked list
typedef struct CLLNode {
    int data;
    struct CLLNode* next;
}cll;

// Function to create a new node for doubly linked list
dll* createDLLNode() {
    dll* newNode = (dll*)malloc(sizeof(dll));
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to create a new node for circular linked list
cll* createCLLNode() {
    cll* newNode = (cll*)malloc(sizeof(cll));
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of doubly linked list
void insertDLLNodeAtBegin(dll** head, int data) {
    dll* newNode = createDLLNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to insert a new node at the end of doubly linked list
void insertDLLNodeAtEnd(dll** head, int data) {
    dll* newNode = createDLLNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        dll* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function to delete a node from doubly linked list
void deleteDLLNode(dll** head, int data) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    dll* current = *head;
    dll* prev = NULL;

    // Check if the head node contains the data
    if (current != NULL && current->data == data) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
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
}

// Function to insert a new node at the beginning of circular linked list
void insertCLLNodeAtBegin(cll** head, int data) {
    cll* newNode = createCLLNode(data);
    if (*head == NULL) {
        newNode->next = newNode; // Point to itself for circular list
        *head = newNode;
    } else {
        cll* current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = *head;
        *head = newNode;
    }
}

// Function to insert a new node at the end of circular linked list
void insertCLLNodeAtEnd(cll** head, int data) {
    cll* newNode = createCLLNode(data);
    if (*head == NULL) {
        newNode->next = newNode; // Point to itself for circular list
        *head = newNode;
    } else {
        cll* current = *head;
        while (current->next != *head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = *head;
    }
}

// Function to delete a node from circular linked list
void deleteCLLNode(cll** head, int data) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    cll* current = *head;
    cll* prev = NULL;

    // Search for the node to be deleted
    while (current->data != data) {
        if (current->next == *head) {
            printf("Node with data %d not found.\n", data);
            return;
        }
        prev = current;
        current = current->next;
    }

    // Update the links
    if (current == *head && current->next == *head) {
        *head = NULL;
    } else if (current == *head) {
        prev = *head;
        while (prev->next != *head) {
            prev = prev->next;
        }
        *head = (*head)->next;
        prev->next = *head;
    } else if (current->next == *head) {
        prev->next = *head;
    } else {
        prev->next = current->next;
    }

    free(current);
}

// Function to display the doubly linked list
void displayDLL(dll* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    dll* current = head;
    printf("Doubly Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to display the circular linked list
void displayCLL(cll* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    cll* current = head;
    printf("Circular Linked List: ");
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

int main() {
    dll* dllHead = NULL;
    cll* cllHead = NULL;

    // // Doubly Linked List operations
    // insertDLLNodeAtBegin(&dllHead, 10);
    // insertDLLNodeAtBegin(&dllHead, 20);
    // insertDLLNodeAtEnd(&dllHead, 30);
    // insertDLLNodeAtEnd(&dllHead, 40);
    // displayDLL(dllHead);

    int n,item; printf("Enter the length of doubly linked list: "); scanf("%d",&n);
    dll* p1,*q1; cll* p2,*q2;
    p1 = createDLLNode();
    p2 = createCLLNode();
    
    dllHead = p1;
    cllHead = p2;

    for (int i = 0; i < n; i++)
    {
        printf("Element: ");scanf("%d",&item);
        p1->data = item;
        q1 = createDLLNode();
        p1->next = q1;        
        q1->prev = p1;
        p1 = q1;        
    }
    printf("\n");
    printf("Enter the length of circular linked list: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");scanf("%d",&item);
        p2->data = item;
        q2 = createDLLNode();
        p2->next = q2;        
        p2 = q2;        
    }
    
    deleteDLLNode(&dllHead, 20);
    displayDLL(dllHead);

    deleteDLLNode(&dllHead, 50);

    // // Circular Linked List operations
    // insertCLLNodeAtBegin(&cllHead, 50);
    // insertCLLNodeAtBegin(&cllHead, 60);
    // insertCLLNodeAtEnd(&cllHead, 70);
    // insertCLLNodeAtEnd(&cllHead, 80);
    // displayCLL(cllHead);

    deleteCLLNode(&cllHead, 60);
    displayCLL(cllHead);

    deleteCLLNode(&cllHead, 90);


    return 0;
}