/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* curr=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return curr;
    }
    
};
