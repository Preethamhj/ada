#include<bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node * left;
    Node * right;
    Node (int data){
        val = data;
        left = NULL;
        right=NULL;
    }
};

Node * buildtree(){
    int val;
    cout<<" enter the root node value \n";
    cin>>val;
    if(val == -1 ) {
        return NULL;
    }
    Node * root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        cout<<" enter the 2 child value ";
        int lc ,rc;
        cin>>lc>>rc;
        cout<<" checking 1";
        if(lc == -1){
            temp->left =NULL;
        }else{
        temp->left= new Node(lc);
        q.push(temp->left);
        }
        cout<<"chekpoint2";
        if(rc == -1){
            temp->right = NULL;

        }else{
            temp->right= new  Node(rc);
            q.push(temp->right);
        }


    }
    return root;
}
void inorder(Node * root ){
    if(root == NULL)return;
    inorder(root->left);
    cout<<"val = "<<root->val<<"\n";
    inorder(root->right);
}

int main(){
    Node * root = buildtree();
    cout<<" tree built sucessfully "<<endl;
    cout<<" inorder of the  tree is "<<endl;
    inorder(root);
    return 0;
}