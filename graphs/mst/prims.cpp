#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){

    int V = 4;

    vector<pair<int,int>> adj[4];

    adj[0].push_back({1,4});
    adj[0].push_back({2,1});

    adj[1].push_back({0,4});
    adj[1].push_back({3,2});

    adj[2].push_back({0,1});
    adj[2].push_back({3,5});

    adj[3].push_back({1,2});
    adj[3].push_back({2,5});

    vector<bool> visited(V,false);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    pq.push({0,0});

    int cost = 0;

    while(!pq.empty()){

        auto top = pq.top();
        pq.pop();

        int weight = top.first;
        int node = top.second;

        if(visited[node])
            continue;

        visited[node] = true;

        cost += weight;

        for(auto it : adj[node]){

            int next = it.first;
            int w = it.second;

            if(!visited[next])
                pq.push({w,next});
        }
    }

    cout<<"MST cost = "<<cost;
}