
class Solution {
public:
void solve(TreeNode* root,vector<int> &ans,int level ){
    //base case
    if(root==NULL){
        return ;

    }
    if(level==ans.size()){
        ans.push_back(root->val);
    }
  //right view
     solve(root->right,ans,level+1);
    //left view
    solve(root->left,ans,level+1);

    
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        solve(root,ans,0);
        return ans;

    }
};
