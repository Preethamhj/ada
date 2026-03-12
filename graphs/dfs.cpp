#include<iostream>
#include<vector>
using namespace std;
bool flag = true;

void  dfs1 (vector<vector<int>> graphs,int s,vector<bool>&visited,int target){
    visited[s] = true;
    cout<<s<<" ";
    if(s == target ){
        flag=false;
        return;
    };
    for(int i=0;i<graphs.size();i++){
        if(graphs[s][i] !=0 && visited[i] != true && flag){
            dfs1(graphs,i,visited,target);
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
   dfs1(graph,s,visited,d);
   if(flag){
    cout<<" the seraching element is unreachable "<<endl;
   }
    return 0;
}
