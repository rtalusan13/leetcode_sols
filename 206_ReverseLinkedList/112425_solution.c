/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/*
Logic breakdown:
This code catches two main base cases - linked lists of size 0 & 1.

The body runs with 3 pointers, essentially a curr, left, and right based on the current node you're working with.
The right ptr (save) has no function other than saving the position of the next node to work with, but all logic
of reversing the list is with saving the left ptr's location and inputting that value into curr->next. There is
another possible seg fault in this code that can arise in the while loop, but that is caught by the if statement.
*/
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL){
        return head;
    }
    struct ListNode* prev = head;
    struct ListNode *curr = head->next;
    if(curr == NULL){
        return head;
    }
    struct ListNode *save = curr->next;
    prev->next = NULL;
    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        curr = save;
        if(save != NULL){
            save = save->next;
        }
    }
    return prev;   
}
