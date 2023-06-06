/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode *temp;
    
    //count
    int count = 0;
    temp = llist;
    while (temp -> next != NULL) {
        count++;
        temp = temp -> next;
    }
    
    //if list is empty, return NULL
    if (llist == NULL)
        return NULL;
    
    //if position is beginning
    if (position == 0) {
        temp = llist;
        llist = llist -> next;
        free (temp);
    } 
    //from end
    else if (position == (count - 1)) {
        SinglyLinkedListNode *prevnode;
        temp = llist;
        while (temp -> next != NULL){
            prevnode = temp;
            temp = temp -> next; 
        }
        if (temp == llist) 
            llist = NULL;
        else
            prevnode -> next = NULL;
    } 
    //from specific position
    else {
        SinglyLinkedListNode *nextnode;
        int i = 0;
        temp = llist;
        while (i < position-1) {
            temp = temp -> next;
            i++;
        }
        nextnode = temp -> next;
        temp -> next = nextnode -> next;
        free(nextnode);
    }
return llist;
}
