#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a node
struct Node {
    char url[100]; // Assuming URLs are at most 100 characters long
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(char* url) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode != NULL) {
        strcpy(newNode->url, url);
        newNode->next = NULL;
    }
    return newNode;
}

// Function to add a URL to the browsing history
void addUrl(struct Node** head, char* url) {
    struct Node* newNode = createNode(url);
    if (newNode != NULL) {
        newNode->next = *head;
        *head = newNode;
    }
}

// Function to display the browsing history
void displayHistory(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%s\n", current->url);
        current = current->next;
    }
}

// Function to free memory for the entire linked list
void freeHistory(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node* history = NULL;
    char inputUrl[100];

    printf("Enter URLs (type 'exit' to stop):\n");
    while (1) {
        printf("URL: ");
        scanf("%s", inputUrl);
        if (strcmp(inputUrl, "exit") == 0) {
            break;
        }
        addUrl(&history, inputUrl);
    }

    printf("\nBrowsing history:\n");
    displayHistory(history);

    // Free memory
    freeHistory(history);

    return 0;
}
