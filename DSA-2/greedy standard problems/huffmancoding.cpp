#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class Node{
    public:
        char  data;
        Node *left ,*right;
        int freq;
        Node (char c ,int f ){
            data = c;
            freq =f;
            left = right = NULL;
        }
};
int main(){
string s;
cout<<" enter the  string "<<endl;
cin>>s;
int n = s.size();
vector<Node>p(n);
for(int i=0;i<n;i++){
int c = count(s.begin(),s.end(),s[i]);
p[i] = Node(s[i],c);
}


}