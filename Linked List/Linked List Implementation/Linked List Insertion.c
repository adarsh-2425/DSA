// Linked List
#include <stdio.h>
#include <stdlib.h>

void display();
void insert_at_beginning();
void insert_at_end();
void insert_at_position();
void newLinkedList(int choice);

struct node
    {
        int data;
        struct node *next;
    };
    
    struct node *head = 0, *newnode, *temp;
    int choice = 1, count = 0, option = 1;
    

int main() {
    
    newLinkedList(choice);
    
    while (option != 0) {
        printf("1. Insert node at beginning\n 2. Insert node at end \n 3. Insert at Position \n 4. Display Linked list \n 0. Exit\n");
        scanf("%d", &option);
        
        switch(option) {
            case 1: 
                insert_at_beginning();
                break;
            case 2:
                insert_at_end();
                break;
            case 3:
                insert_at_position();
                break;
            case 4:
                display();
                break;
            case 0:
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    }
    
    free(newnode);
    return 0;
}

//New Linked List
void newLinkedList(int choice) {
    while (choice) {
        newnode = (struct node*) malloc (sizeof(struct node));
        printf("EnterData : ");
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

//Insert at Beginning
void insert_at_beginning() {
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &newnode -> data);
    
    newnode -> next = head;
    head = newnode;
}

//Insert at End
void insert_at_end() {
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &newnode -> data);
    
    newnode -> next = 0;
    temp = head;
    
    while (temp -> next != 0) {
        temp = temp -> next;
    }
    
    temp -> next = newnode;
}

//Insert at position
void insert_at_position() {
    newnode = (struct node *) malloc (sizeof(struct node));
    int pos, i = 1;
    
    printf("Enter Position : ");
    scanf("%d", &pos);
    
    if (pos > count) {
        printf("Invalid position\n");
    }
    else {
        temp = head;
        while (i < pos) {
            temp = temp -> next;
            i++;
        }
        
        printf("Enter Data : ");
        scanf("%d", &newnode -> data);
        
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }
}

//Display Linked List
void display() {
    if (head == 0)
        printf("List is empty\n");
    else {
        temp = head;
        printf("List elements are : ");
        while (temp != 0) {
            printf("%d ", temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }
}
