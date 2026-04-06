//BST implemnation using the class and  objects 
#include<iostream>
#include<vector> 


using namespace std;

class Node {
    public:
    int data;
    Node * Left;
    Node * Right;
   Node(){
    
   }
    Node (int val){
        this->data = val;
        this->Left = NULL;
        this->Right = NULL;

    }
    
    Node * insertNode(Node * ,int );
    Node * deleteNode(Node * , int);
    bool searchNode(Node * ,int);
    void display(Node *);
};
Node * Node :: insertNode(Node * root,int val){
    if(root == NULL){
    Node * newNode = new Node(val);
    return newNode;
    }
    if(root->data > val)
    root->Left = insertNode(root->Left , val);
    else 
    root->Right = insertNode(root->Right,val);

return root;
}

bool  Node :: searchNode(Node * root , int data){
    if(root == NULL)return  false ;
    if(root->data == data)return true ;
     if(root->data > data)
     return searchNode(root->Left , data);
     else
     return searchNode( root->Right , data);
}
void Node:: display(Node * root ){
    if(root == NULL)return;
    display(root->Left);
    cout<<" val ="<<root->data;
    display(root->Right);
}
Node * minimum(Node * root){
    while(root->Left !=NULL)root=root->Left;
    return root;
}
Node *  Node :: deleteNode(Node * root , int key){
    if(root ==NULL)return NULL;
    if(root->data > key)return deleteNode(root->Left , key);
    else if(root->data < key) return deleteNode(root->Right , key);
    else{
       if(root->Left == NULL){
            Node * temp = root->Right;
            delete root ;
            return temp;
        }
        else if(root->Right == NULL){
            Node * temp = root->Left;
            delete root ;
            return temp;
        }
        else{
            Node * temp = minimum(root->Right);
            root->data = temp->data;
            root->Right = deleteNode(root->Right,temp->data);
            return root;
        }
    
    }
}


int main(){
int choice;
int data;
Node obj;
Node * root = NULL;
while(true){
cout<<"  enter your  choice \n 1. insert \n 2.delete \n 3.search \n 4.display \n 5.exit"<<endl;
cin>>choice;
switch(choice){
    case 1 :
        cout<<"enter the value "<<endl;
        cin>>data;
        root = obj.insertNode(root , data); 
            obj.display(root);
        break;
    case 2 : 
        cout<<" enter the data to be deleted"<<endl;
        cin>>data;
        root = obj.deleteNode(root , data);
        obj.display(root);
        break;
    case 3 :  cout<<"enter the value "<<endl;
        cin>>data;
        cout << obj.searchNode(root , data)<<endl;
        break;
    case 4 : 
        obj.display(root);
        break;
    case 5 :
        exit(0);

}
}
return 0;
}