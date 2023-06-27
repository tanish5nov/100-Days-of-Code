/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        vector<int> values;
        Node* curr1 = head1;
        while (curr1 != NULL) {
            values.push_back(curr1->data);
            curr1 = curr1->next;
        }
       
        Node* curr2 = head2;
        while (curr2 != NULL) {
            values.push_back(curr2->data);
            curr2 = curr2->next;
        }
        sort(values.begin(), values.end());
        
          auto it = unique(values.begin(), values.end());
        values.resize(distance(values.begin(), it));
        
        Node* finalNode = new Node(values[0]);
        Node* curr = finalNode;
        for(int i=1; i<values.size();i++)
        {
            Node* dummy = new Node(values[i]);
            curr -> next = dummy;
            curr = curr -> next;
        }
        return finalNode;
    }
};
