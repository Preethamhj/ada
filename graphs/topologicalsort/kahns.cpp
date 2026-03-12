#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    int v,e;
    cout<<"enter thhe  number of vertices"<<endl;
    cin>>v;
    cout<<"enter the  number of edges "<<endl;
    cin>>e;
    vector<vector<int>>graph(v,vector<int>(v,0));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>graph[i][j];
        }
    }
    vector<bool>visited(v,false);
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(graph[i][j]){
                indegree[j]++;
            }
        }
    }
    queue<int>q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int u=q.front();
        visited[u]=true;
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<v;i++){
            if(graph[u][i] && !visited[i]){
                indegree[i]--;
            if(indegree[i] == 0 )q.push(i);
        }
    }
}

return 0;
}