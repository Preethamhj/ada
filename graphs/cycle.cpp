#include<iostream> 
#include<vector>

using namespace std;

void  dfs(vector<vector<int>> graph , int s ){
    static vector<bool> visited(graph.size(),false);
    static vector<int> parent(graph.size(),-1);

    visited[s] =true;
    for(int i=0;i<graph.size();i++){
      if(graph[s][i]){
        if(!visited[i]){
            parent[i] =s;
            dfs(graph,i);
        }else{
            if(parent[s] != i){
                cout<<" cycle is detected between "<<s<<" and "<<i<<endl;
            }
        }
      } 
        
    }
}
int main(){
    int v,e;
    cout<<" enter the  number of  vertices"<<endl;
    cin>>v;
    cout<<"enter the number of edges :"<<endl;
    cin>>e;
    vector<vector<int>> graph(v,vector<int>(v,0));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>graph[i][j];
        }
    }
    int s;
    cout<<"enter the  source vertex"<<endl;
    cin>>s;
    dfs(graph,s);
    return 0;

}