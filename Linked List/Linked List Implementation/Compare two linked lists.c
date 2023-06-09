//calculating length of linkedlist
int getLength(SinglyLinkedListNode *head) {
     int length = 0;
     while (head != NULL) {
         length++;
         head = head -> next;
     }
     return length;
 }

//return 0 if length or data mismatch between two linked lists
//return 1 if no mismatch
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int len1 = getLength(head1);
    int len2 = getLength(head2);
    int diff;
    
    if (len1 != len2)
        return 0;
    else {
        diff = abs(len1 - len2);
    }
    
    while (head1 != NULL && head2 != NULL) {
        if (head1 -> data != head2 -> data)
            return 0;
        
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    return 1;

}
