#include<iostream>
#include<vector>
using namespace  std;
 class TreeNode {
    public:
    int data;
    TreeNode *  left;
    TreeNode * right;
    TreeNode (int val){
        this->data = val;
        this->left= NULL;
        this->right= NULL;
    }
 };
 TreeNode *  buildtree(){
     int data;
     cin>>data;
     if(data == -1){
        return NULL;
     }
     TreeNode * node= new TreeNode(data);
     node->left = buildtree();
     node->right= buildtree();

     return node;

 }
 vector<int>res;
 void dfs(TreeNode * root , vector<int> res){
    if(root == NULL)return;
    res.push_back(root->data);
    if(root->left==NULL && root->right==NULL){
        for(int p:res){
            cout<<p<<"->";
        }
        cout<<"NULL \n";
        return;
    }
    dfs(root->left,res);
    dfs(root->right,res);
    res.pop_back();
    
 }
 int main(){
    TreeNode * root = NULL;
    root = buildtree();
    dfs(root,res);
 }