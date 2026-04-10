#include<iostream>
#include<vector>
#include<stack>

using namespace std;
void dfs(vector<vector<int>>&graph , int s , stack<int>& st ,vector<int>& visited,int v){
    visited[s] =1;
    for(int i=0;i<v;i++){
        if(graph[s][i] && !visited[i]){
            dfs(graph,i,st,visited,v);
        }
    }
    st.push(s);
}
int main(){
    int v,e;
    stack<int>s;
    cout<<"enter the number of vertices"<<endl;
    cin>>v;
    cout<<"enter the  number of  edges"<<endl;
    cin>>e;
        vector<int>visited(v,0);

    vector<vector<int>> graph(v,vector<int>(v,0));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>graph[i][j];
        }
    }
    
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(graph,i,s,visited,v);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}