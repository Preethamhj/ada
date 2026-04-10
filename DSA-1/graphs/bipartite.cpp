#include<iostream> 
#include<numeric>
#include<queue>
#include<vector>
using namespace std;
bool dfs(vector<vector<int>>& graph, vector<int>& colour, int s){

    for(int i=0;i<graph.size();i++){
        if(graph[s][i]){
            if(colour[i] == -1){
                colour[i] = 1 - colour[s];

                if(!dfs(graph, colour, i))
                    return false;
            }
            else if(colour[i] == colour[s]){
                return false;
            }
        }
    }

    return true;
}
int main(){
     queue<int>q;
    int v,e;
    cout<<"enter the  number of vertices"<<endl;
    cin>>v;
    cout<<"enter the  number of edges"<<endl;
    cin>>e;
    vector<vector<int>>graph(v,vector<int>(v,0));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>graph[i][j];
        }
    }
    vector<int>colour(v,-1);
   /* bfs  method 
    for(int i=0;i<v;i++){
        if(colour[i] ==-1){
           
            q.push(i);
            colour[i]=0;
            while(!q.empty()){
                int u =q.front();
                q.pop();
                for(int j=0;j<v;j++){
                    if(graph[u][j]){
                        if(colour[j] == -1){
                            colour[j] = 1-colour[u];
                            q.push(j);
                        }else if(colour[j] ==colour[u]){
                            cout<<" the garph is not bipartite " <<endl;
                            return 0;
                        }
                    }
                }

            }

        }
    }*/
   //dfs method 
   if(dfs(graph ,colour,0)){
        cout<<" the graph is bipartite "<<endl;
    }else{
        cout<<" the graph is not bipartite "<<endl; 
   }

    return 0;
}