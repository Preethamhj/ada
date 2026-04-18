#include<iostream>
#include<vector> 

using namespace std;
void mincoin(vector<int>& coins ,int target){
    int n = coins.size()-1;
        sort(coins.begin(),coins.end());
        int res = 0;
        while(res != target){
            int k = coins[n];
            res+=k;
            int rem = target - res;
            
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