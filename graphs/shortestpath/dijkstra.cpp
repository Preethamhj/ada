#include<iostream>
#include<queue>
#include<vector>
#include<climits>


using namespace std;
vector<int> dijikstra(vector<vector<int>>& graph , int s , vector<int>&dist , queue<int>& q){
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<graph.size();i++){
            if(graph[u][i]){
                if(dist[u]+graph[u][i] < dist[i]){
                    dist[i] =dist[u]+graph[u][i];
                    q.push(i);
                }
            }
        }
    }
    return dist;
}
int main(){
    int v,e;
    cout<<" enter the  number of vertices "<<endl;
    cin>>v;
    cout<<" enter  the number of edges "<<endl;
    cin>>e;
    vector<vector<int>>graph(v, vector<int>(v,0));
    cout<<" enter the  elements to the  graphs "<<endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
        cin>>graph[i][j];    
    }
    }
    queue<int>q;
    vector<int>dist(v,0);
    int s;
    cout<<" enter the  source vertex "<<endl;
    cin>>s;
    
    for(int i=0;i<v;i++){
        if(i ==s)continue;
        dist[i] = INT_MAX;
    }
    dist = dijikstra(graph,s,dist,q);
    cout<<" the shortest distance is "<<endl;
    for(int i=0;i<dist.size();i++){
        cout<<"i:"<<i<<"  distance = "<<dist[i]<<endl;
    }
return 0;
}