// Linked List Implementation
#include <stdio.h>
#include <stdlib.h>

int main() {
    //creating structure for linked list
    struct node
    {
        int data;
        struct node *next;
    };
    
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1, count = 0;
    
    //while choice is 1, create new linked list
    while (choice) {
        newnode = (struct node *) malloc (sizeof(struct node));
        printf("Enter Data : ");
        scanf("%d", &newnode -> data);
        newnode -> next = 0;
    
    //for first item in linked list
    if (head == 0) {
        head = temp = newnode;
    }
    //for conscecutive items in linked list
    else {
        temp -> next = newnode;
        temp = newnode;
    }
    
    //code will stop if choice is 0
    //if choice is 1, it will create new node
    printf("Do you want to continue (0 , 1)? ");
    scanf("%d", &choice);
    }
    
    printf("-----Linked List-----\n");
    
    //printing data in nodes
    temp = head;
    while (temp != 0) {
        printf("%d ", temp -> data);
        temp = temp -> next;
        count++;
    }
    
    {
        //for printing number of items in linked list
        printf("\nCount = %d", count);
    }
    
    return 0;
}
