#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    int v,e;
    cout<<" enter the  number of vertices "<<endl;
    cin>>v;
    cout<<" enter the number of  edges "<<endl;
    cin>>e;
    vector<vector<int>>graph(v,vector<int>(v,0));
    cout<<" enter the  data to the graph"<<endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>graph[i][j];
        }
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(graph[i][j] != 99999){
                for(int k=0;k<v;k++){
                    if(graph[i][j]>graph[i][k]+graph[k][j]){
                        graph[i][j] = graph[i][k]+graph[k][j];
                    }
                }
            }
        }
    }
    for(int i=0;i<v;i++){
        if(graph[i][i] >0){
            cout<<" the graph has negative cycle"<<endl;
            return;
        }
    }
    cout<<" the shortest path between the  all pairs of the  edges is  "<<endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<graph[i][j]<<" ";
        }
    }
    return  0;
}