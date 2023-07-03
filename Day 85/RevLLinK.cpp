/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
            
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    {
        node* prevNode=NULL;
        node* mainHead=NULL;
        node* prevStart=head;
        int flag=0;
        while(head!=NULL){
            int cnt=0;
            node* start=head;
            while(cnt<k and head!=NULL){
                node* nextNode=head->next;
                head->next=prevNode;
                prevNode=head;
                head=nextNode;
                cnt++;
            }
            if(flag==0){
                mainHead=prevNode;
                flag=1;
            }
            else prevStart->next=prevNode,prevStart=start;
        }
        prevStart->next=NULL;
        return mainHead;
    }
};
