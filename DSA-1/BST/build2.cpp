//buildin using the sorted array 

#include<iostream>
#include<vector>

using namespace std;

class Node {
    public:
    int data;
    Node * left ;
    Node * right;
    Node (int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;

    }
};
void build(Node * &root , vector<int> arr , int s , int e){
    if(s>e){
        return ;
    }
    int mid = (s+e)/2;
    root = new Node(arr[mid]);
    build(root->left,arr,s,mid-1);
    build(root->right,arr,mid+1,e);
}
void inorder(Node * root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int n ;
    cout<<" enter the number of nodes "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<" enter the nodes value  "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node * root = NULL;
    build(root,arr,0,n-1);
    cout<<" the inorder traversal of the tree is "<<endl;
    inorder(root);
    
}
