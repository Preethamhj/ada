#include<iostream>
#include<vector>
#include<queue>

using namespace  std;

struct Node {
    char ch;
    int freq;
    Node * left,*right;

    Node (char c , int f){
        ch =c;
        freq = f;
        left=right = NULL;
    }
};
struct compare{
    bool operator()(Node * a ,Node * b){
        return a->freq > b->freq;
    }
};

void printCodes(Node * root , string code ){
    if(!root) return ;
    if(!root->left && !root->right){
        cout<<root->ch<<code<<endl;
    }
    printCodes(root->left,code+"0");
    printCodes(root->right,code+"1");
}
int main(){
    vector<char>chars={'a','b','c','d','e','f'};
    vector<int>freq = { 5,9,12,13,16,45};

    priority_queue<Node*, vector<Node*>,compare>pq;

    for(int i=0;i<chars.size();i++){
        pq.push(new Node(chars[i],freq[i]));
    }
    while(pq.size() > 1){
        Node * left = pq.top();
        pq.pop();
        Node * right = pq.top();
        pq.pop();

        Node * merges = new Node('$',left->freq+right->freq);
        merges->left = left ;
        merges->right = right;
        pq.push(merges);
    }
    Node * root = pq.top();

    cout<<"huffmun coding is "<<endl;
    printCodes(root,"");


}