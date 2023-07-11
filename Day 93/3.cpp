/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root){
        if(root==NULL){return 0;}
        return max(height(root->left),height(root->right))+1;
    }
    
    bool isBalanced(Node *root)
    {
        if(root==NULL){return true;}
        
        int leftH = height(root->left);
        int rightH = height(root->right);
        if ((abs(leftH-rightH)<= 1) && isBalanced(root->left) && isBalanced(root->right) ){
            return true;
        } 
        return false;
    }
};
