#include<iostream>
#include<vector>
using namespace std;
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

    cout<<" the graph is  ";
    for(int i=0;i<v;i++){
        cout<<i;
        for(int j=0;j<v;j++){
            if(graph[i][j]!=0)
            cout<<"->"<<j<<" :"<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}