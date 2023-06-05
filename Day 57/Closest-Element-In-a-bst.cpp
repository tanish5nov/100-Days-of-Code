/*
Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	int ans=INT_MAX;
    void solve(Node*root,int K)//inorder
    {
        if(!root)
            return;
            
        solve(root->left,K);
        int diff=abs(root->data-K);
        if(diff<ans)
            ans=diff;
        solve(root->right,K);
    }
    int minDiff(Node *root, int K)
    {
        solve(root,K);
        return ans;
    }
};
