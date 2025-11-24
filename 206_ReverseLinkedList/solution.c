/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
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
