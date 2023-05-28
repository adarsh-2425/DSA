// Linked List
#include <stdio.h>

void display();
void insert_at_beginning();
void insert_at_end();
void insert_at_position();
void newLinkedList();

int main() {
    
    struct node
    {
        int data;
        struct node *next;
    };
    
    struct node *head = 0, *newnode, *temp;
    int choice = 1, count = 0;
    
    
    
    temp = head;
    while (temp != 0) {
        printf("%d", temp -> data);
        temp = temp -> next
        count++;
    }

    return 0;
}

void newLinkedList(int choice) {
    while (choice) {
        newnode = (struct node*) malloc (sizeof(struct node));
        printf("Enter Data : ");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
        
        if (head == 0)
            head = temp = newnode;
        else {
            temp -> next = newnode;
            temp = newnode;
        }
        
        printf("Do you want to continue - 0 or 1 : ");
        scanf("%d", &choice);
    }
}
