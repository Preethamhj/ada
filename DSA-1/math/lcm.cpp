#include<iostream> 
#include<algorithm>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int start = max(a,b);
    for(;;){
        if(start%a==0 && start%b==0){
            cout<<start<<" ";
            break;
        }
        start++;
    }
}