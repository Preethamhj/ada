#include<iostream>
#include<vector> 
#include<algorithm>

using namespace std;
int main(){
    int n;
    cout<<" enter the number of coins ";
    cin>>n;
    cout<<"enter the  coins list ";
    vector<int> res(n);
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    cout<<" enter the target";
    int target,sum;
    cin>>target;
    bool found;
    sort(res.rbegin(),res.rend());
    while(target >0){
        found =false;
        for(int i=0;i<n;i++){
        if(res[i] <= target){
          sum = res[i];
          found = true;
            break;
        }}
            cout<<sum<<" ";
            target=target -sum;
        
        if(!found){
            cout<<" the target not found";
            break;
        }
    }
}
