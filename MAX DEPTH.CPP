/*
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
    
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        // code here 
    
        if(root==NULL)
            return 0;
            
       
        
        int l=height(root->left);
       
        int r=height(root->right);
       
        
        
        
        return max(l,r)+1;
        
    }
};

