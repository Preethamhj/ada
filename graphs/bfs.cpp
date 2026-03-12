#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs (vector<vector<int>> &graph,int s , vector<bool>& visited,int target){
    queue<int>q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        if(node == target)break;
        for(int i=0;i<graph.size();i++){
            if(graph[node][i] ==1 && visited[i] !=true){
                q.push(i);
                visited[i] =true;
            }
        }

    }
}

int main(){
   
    int v;
    int e;
    cout<<"enter  the  number of vertices"<<endl;
    cin>>v;
    cout<<"enter the number of edges"<<endl;
    cin>>e;
     vector<vector<int>>graph(v, vector<int>(v, 0));
    int a ;
    for(int i =0;i<v;i++){
        for(int j=0;j<v;j++){
        cin>>a;
        graph[i][j] = a;
        }
    }
    cout<<" enter the source  vertex"<<endl;
    int s;
    cin>>s;
    int d;
    cout<<"enter the destination";
    cin>>d;
   vector<bool>visited(v,false);
   bfs(graph,s ,visited,d);
    return 0;
}
