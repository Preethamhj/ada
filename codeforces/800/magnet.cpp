#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int prev,curr;
    cin>>prev;
    int count =0;
    for(int i=1;i<n;i++){
        cin>>curr;
        if(prev^curr){
            count++;
        }
        prev=curr;
    }
    cout<<count+1;
}