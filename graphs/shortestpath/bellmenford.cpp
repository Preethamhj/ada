#include<iostream>
#include<vector>
#include<climits>

using namespace std;

struct Edge{
    int u,v,w;
};

int main(){

    int V = 3;
    
    vector<Edge> edges;

    edges.push_back({0,1,4});
    edges.push_back({0,2,5});
    edges.push_back({1,2,-6});

    int source = 0;

    vector<int> dist(V,INT_MAX);

    dist[source] = 0;

    for(int i=0;i<V-1;i++){

        for(auto e : edges){

            if(dist[e.u] != INT_MAX && dist[e.u] + e.w < dist[e.v]){

                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    // Negative cycle check
    for(auto e : edges){

        if(dist[e.u] != INT_MAX && dist[e.u] + e.w < dist[e.v]){

            cout<<"Negative Cycle Detected"<<endl;
            return 0;
        }
    }

    cout<<"Shortest distances:"<<endl;

    for(int i=0;i<V;i++)
        cout<<dist[i]<<" ";

}