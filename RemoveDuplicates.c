#include<stdio.h>

struct ListNode
 {
    int val; 
    struct ListNode *next;
};

 struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if(head == NULL)
    {
        return 0;
    }
    struct ListNode *current = head;

    while(current->next!= NULL)
    {
        if(current->val == current->next->val)
        {
            struct ListNode *duplicate = current->next;
            current->next = current->next->next;
            free(duplicate);
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}
