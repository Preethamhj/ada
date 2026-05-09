#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x == 67){
            cout<<67<<endl;
            continue;
        }
        y=x+1;
        cout<<y <<endl;
    }
}