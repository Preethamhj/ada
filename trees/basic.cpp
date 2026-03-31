#include <bits/stdc++.h>

using namespace std ;
struct Node {
    int data;
    struct Node * left;
    struct Node * right;

    Node (int val){
        data = val;
        left =NULL;
        right= NULL;
    }

};
Node * buildtree(){
    int data;
    cout<<" enter the required data \n";
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node * newNode = new Node(data);
    
    newNode->left = buildtree();
    newNode->right = buildtree();

    return newNode;
}
void preorder(Node * root ){
    if(root== NULL)return ;

    cout<<root->data<< "  ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node * root ){
    if(root== NULL)return ;

    cout<<root->data<< "  ";
     postorder(root->right);
    postorder(root->left);
   
}

void inorder(Node * root ){
    if(root== NULL)return ;  
    inorder(root->left);
      cout<<root->data<< "  ";
        inorder(root->right);

} 
void levelorder(Node * root){
    queue<Node * >q;
    q.push(root);
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        cout<<" temp->data = "<<temp->data<<" \n";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);

    }

}
int height(Node * root){
    if(root == NULL)return 0;
    return 1+max(height(root->left),height(root->right));
}
int main(){
    Node * root = buildtree();
    cout<<" preorder traversal is : "<<endl;
    preorder(root);
    cout<<" \n postorder traversal is : "<<endl;
    postorder(root);
    cout<<"\n  inorder traversal is : "<<endl;
    inorder(root);
    cout<<"\n level order traversal is : "<<endl;
    levelorder(root);   
    cout<<"\n height of the tree is : "<<height(root)<<endl;
    

    return 0;
 }