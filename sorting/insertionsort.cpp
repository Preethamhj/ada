#include<iostream>
#include<vector>

using namespace std;
void insertionsort(vector<int>&res){
    for(int i=1;i<res.size();i++){
        int key = res[i];
        int j=i-1;
        while(j>=0 && res[j]>key){
                res[j+1]=res[j];
            
            j--;    
        }
        res[j+1]=key;
    }
}
int main(){
    int n;
    cout<<"enter the  number of elements "<<endl;
    cin>>n;
    cout<<" enter the elements"<<endl;
    vector<int>res(n);
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    insertionsort(res);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}