#include<iostream>
#include<vector>
using namespace std;
struct Edge {
    int v,u,w;

};
vector<int>parent;
int find(int x){
    if(parent[x] !=x){
        parent[x] =find(parent[x]);
    }
    return parent[x];
}
void unite(int a,int b){
    int pa = find(a);
    int pb= find(b);
    parent[pb]=pa;

}
int main(){
    
    int v, e;
    cout<<" enter the number of vertices"<<endl;
    cin>>v;
    cout<<" enter the  numbber of edges "<<endl;
    cin>>e;
    cout<<" enter the  edges v,u,w format"<<endl;
    vector<Edge>edge(e);
    for(int i=0;i<e;i++){
        cin>>edge[i].v;
        cin>>edge[i].u;
        cin>>edge[i].w;
    }
    parent.resize(v);
    for(int i=0;i<v;i++)parent[i] =i;
    for(int i=0;i<e;i++){
        for(int j=0;j<e-i-1;j++){
            if(edge[j+1].w < edge[j].w){
                Edge temp = edge[j];
                edge[j] = edge[j+1];
                edge[j+1]= temp;
            }
        }
    }
    vector<Edge>res;
    for(int i=0;i<e;i++){
        int a = edge[i].v;
        int b = edge[i].u;
        if(res.size() == v-1)
             break;
        if(find(a)!= find(b)){
            unite(a,b);
              res.push_back(edge[i]);

            cout<<a<<" "<<b<<" "<<edge[i].w<<endl;
        }
    }
    int cost = 0;

    for(auto x:res)
        cost += x.w;

    cout<<"MST cost = "<<cost<<endl;

    return 0;

}