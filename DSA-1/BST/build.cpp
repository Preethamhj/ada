#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node {
    public:
    int data;
    Node * left;
    Node * right;
    Node(int val){
        this->data = val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node * insert(Node * root ,int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->data > val){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);  
    }
    return root;
}
void display(Node * root){
    if(root == NULL){
        return ;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
void inorder(Node * root){
    if(root == NULL){
        return ;
    }
    queue<Node* > q;
    q.push(root);
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }       
}
int main(){
int n;
cout<<" enter the number of nodes "<<endl;
cin>>n;
vector<int> arr(n);
cout<<" enter the nodes value  "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<" the  bst tree is"<<endl;
Node * root = NULL;
for(int i=0;i<n;i++){
    root = insert(root,arr[i]);     

}
cout<<" tree built successfully "<<endl;
display(root);
cout<<" inorder of the tree is "<<endl;
inorder(root);

return 0;
}