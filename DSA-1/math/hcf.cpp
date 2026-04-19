#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ; 
/*
int main(){
    vector<int>res;
    int a,b;
    cin>>a>>b;
    cout<<" the hcf of the 2 numbers is "<<endl;
    for(int i=1;i<=min(a,b);i++){
        if(a%i ==0 && b%i== 0){
            res.push_back(i);
        }
    }
    for(int p : res){
        cout<<p<<" ";
    }
}
*/
int main (){
    int a ,b;
    cin>>a>>b;
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;  
    }
    cout<<a;
}