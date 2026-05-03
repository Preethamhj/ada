#include<iostream>

using namespace std;
bool max3(int a,int b,int c){
    if(a > b){
        if(a > c){
            return (a == b+c);
        }else{
            return (c == a+b) ;
        }
    }else{
        if(b > c){
            return (b == a+c);
        }else{
            return (c == a+b);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(max3(a,b,c)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}