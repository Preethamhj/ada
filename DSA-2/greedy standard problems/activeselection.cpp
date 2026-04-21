#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;
int main(){

    int n;
    cout<<"enter the number of activities ";
    cin>>n;
    vector<pair<int,int>> res(n);
    for(int i=0;i<n;i++){
        cout<<"start";
        cin>>res[i].first;
        cout<<"end";
        cin>>res[i].second;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(res[j].second > res[j+1].second){
                swap(res[j] ,res[j+1]);
            }
        }
    }
    int count=1;
    int last = res[0].second;
    for(int i=1;i<n;i++){
        if(res[i].first >= last){
            count++;
            last = res[i].second;
        }
    }
    cout<<" we can participate max of "<<count<<" activities";

}