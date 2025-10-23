/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode* temp=NULL;
    struct ListNode* temp2=head;
    while(head!=NULL)
    {
        temp2=head->next;
        head->next=temp;
        temp=head; //stores address of head for the next operation when we update head
        head=temp2; //wherever head is there only we change the address and do operation to reverse
    }
    head=temp;
    return head;
}