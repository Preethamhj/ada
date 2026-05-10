#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        int n1,k;
        cin>>n1>>k;
        int sum=0;
        for(int i=0;i<n1;i++){
            int a ;
            cin>>a;
            sum+=a;
        }
        if( sum%2 == 1){
            cout<<"YES"<<endl;
            continue;
        }
        if((n1*k)%2 == 1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

    }
}