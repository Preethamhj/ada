#include<iostream>
#include<vector>
#include<algorithm>

using namespace  std;
bool compare(pair<int,int>a , pair<int,int>b){
   double r1 = (double)a.second/a.first;
    double r2 = (double)b.second / b.first;
    return r1 > r2;
}
int main(){
    int n;
    cout<<"enter the  number of items ";
    cin>>n;
    cout<<"enter the weights and  value of each item"<<endl;
    vector<pair<int,int>>res(n);
    for(int i=0;i<n;i++){
        cin>>res[i].first>>res[i].second;

    }
//first-weight 
//second - value 

    cout<<" enter the max capacity of bag "<<endl;
    int capacity,sum=0;
    cin>>capacity;
    sort(res.begin(),res.end(),compare);
    double  total=0;
    for(int i=0;i<n;i++){
        if(res[i].first <= capacity){
            total+=res[i].second;
            capacity-=res[i].first;
        }else{
            total+= (double)res[i].second *((double)capacity/res[i].first);
            break;
        }
    }
    
    cout<<" max sum="<<total;
}