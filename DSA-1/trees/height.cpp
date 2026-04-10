#include<bits/stdc++.h>
using namespace std;
//using classes and  objects to create a tree
class TreeNode{
    public:
    int data;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int data){
        this->data = data;
        this->left = NULL;
        this->left = NULL;

    }
};

TreeNode *  buildtree(){
    int n;
    cin>>n;
    if(n == -1){
        return NULL;
    }
    TreeNode * root = new TreeNode(n);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}

int height(TreeNode * root){
    if(root == NULL)return 0;
    return 1+max(height(root->left),height(root->right));
}

int main(){
  TreeNode * root = NULL;
  root = buildtree();
  cout<<height(root)<<endl;

}