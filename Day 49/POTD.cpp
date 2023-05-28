/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           int i=1, j;
        struct Node *temp = head;
        while(temp->next != NULL)
        {
            temp=temp->next;
            i++;
        }
        if(n>i)
        {
            return -1;
        }
        else
        {
            temp=head;
            for(j=0;j<i-n;j++)
            {
                temp=temp->next;
            }
        int res = temp->data;
        free(temp);
        return res;
        }
    }
};
