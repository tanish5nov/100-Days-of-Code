/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node* temp= head;
        int i=0;
        while(temp!=NULL){
            i+=1;
            temp=temp->next;
        }
        int mid = (i/2)+1;
        
        int cnt=0;
        int ans=0;
        temp=head;
        while(cnt<mid){
            ans=temp->data;
            temp=temp->next;
            cnt++;
        }
        return ans;
    }
};
