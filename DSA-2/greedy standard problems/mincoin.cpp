#include<iostream>
#include<vector> 
#include<algorithm>

using namespace std;
void mincoin(vector<int>coins , int target){
    sort(coins.begin(),coins.end());
    int count=0;
    for(int i=0;i<coins.size();i++){
        if(target >= coins[i]){
            int temp = target/ coins[i];
            count+=temp;
            cout<<coins[i]<<" ";
            target -=temp*coins[i];
        }
    }
    if(target!= 0){
        cout<<" not possible"<<endl;
    }else{
        cout<<"the target is found min count is "<<count;
    }
}

int main(){
    int n;
    cout<<" enter the  number of coins ";
    cin>>n;
    vector<int>coins(n);
    cout<<"enter the  coins available "<<endl;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int target;
    cout<<" enter the target we need to achive "<<endl;
    cin>>target;
    mincoin(coins,target);
    return 0;

}