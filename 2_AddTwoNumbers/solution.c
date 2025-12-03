/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode* returnList = malloc(sizeof(struct ListNode));
    struct ListNode* head = returnList;
    while(l1 != NULL || l2 != NULL){
        int checker = 0;
        int curr = 0;
        if(carry == 1){
            curr = 1;
        }
        carry = 0;
        if(l1 != NULL){
            curr += l1->val;
            if(l1->next != NULL){
                checker++;
            }
            l1 = l1->next;
        }
        if(l2 != NULL){
            curr += l2->val;
            if(l2->next != NULL){
                checker++;
            }
            l2 = l2->next;
        }
        if(curr > 9){
            carry = 1;
            curr = curr - 10;
        }
        returnList->val = curr;
        if(carry == 1 || checker){
            returnList->next = malloc(sizeof(struct ListNode));
            returnList = returnList->next;
            if(checker == 0){
                returnList->val = 1;
            }
        }
    }
    returnList->next = NULL;
    return head;
}
