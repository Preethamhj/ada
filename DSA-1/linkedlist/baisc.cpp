#include<iostream>
using namespace std;
struct node{
    int val;
    struct node * next;
};

struct node* createnode(int x){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->val = x;
    temp->next = NULL; 
    return temp;
} 
struct node  * insertrare(struct node * head , int x ){
    struct node * temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    struct  node *  newnode = createnode(x);
    head->val+=1;
    temp->next = newnode ;
    return head ;
}
void display(struct node* head){
    struct node * temp =head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->val<<"  ";
        temp=temp->next;
    }
}
struct node * insertfront(struct node * head , int x ){
    struct node * temp = createnode(x);
    temp->next = head ;
    int temp1 = head->val;
    head->val = temp->val;
    temp->val = temp1;
    head = temp ;
    temp->val+=1;
    return head;
}
struct node * deleterare (struct node * head ){
    struct node * temp = head ;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    struct node * prev = temp->next;
    temp->next = NULL;
    head->val -=1;
    free(prev);
    return head;

}
struct node * deletefront(struct node * head){
    head->next->val = head->val-1;
    struct node * prev = head;
    head = head->next;
    free(prev);
    return head;
}
struct node * deletebyval(strcut node * head , int x){
    struct node * temp=head;
    struct node * prev = NULL;
    while(temp->next !=NULL){
        if(temp->val == x){
            if(prev == NULL){
                head = temp->next;
                head->val = head->val-1;
                free(temp);
                return head ;
            }
            prev->next = temp->next;
            head->val -=1;
            free(temp);
            return head ;
        }
        prev = temp;
        temp = temp->next;
    }
}

int     main(){
    struct node  * head = (struct node *)malloc(sizeof(struct node));
    head->val= 0;
    head->next = NULL;
    int  n;
    cout<<"enter the  number of nodes ";
    cin>>n;
    int val;
    for(int i=0;i<n;i++){
        cout<<"enter the  value for node "<<endl;
        cin>>val;
        head = insertrare(head ,val );
        cout<<"enter the  value for node "<<endl;
        cin>>val;
        head = insertfront(head , val);
    }
    display(head);
    head = deleterare(head);
    display(head);
    return  0;
}