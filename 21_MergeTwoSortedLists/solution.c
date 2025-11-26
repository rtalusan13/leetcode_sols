/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }
    struct ListNode* head = malloc(sizeof(struct ListNode));
    struct ListNode* true_head = head;
    while(list1 != NULL || list2 != NULL){
        if(list1 != NULL && list2 != NULL){
            if(list1->val > list2->val){
                head->val = list2->val;
                list2 = list2->next;
            }
            else{
                head->val = list1->val; 
                list1 = list1->next;
            }
        }
        else if(list1 != NULL){
            head->val = list1->val;
            list1 = list1->next;
        }
        else if(list2 != NULL){
            head->val = list2->val;
            list2 = list2->next;
        }
        if(list1 != NULL || list2 != NULL){
            head->next = malloc(sizeof(struct ListNode));
            head = head->next;
        }
    }
    head->next = NULL;
    return true_head;
}
