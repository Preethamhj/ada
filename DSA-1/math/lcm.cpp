#include<iostream> 
#include<algorithm>

using namespace std;

/*
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
*/
   int gcd(int a ,int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    cout<<a<<endl;
    return a;
   }
   int main(){
    int a,b;
    cin>>a>>b;
    int p = gcd(a,b);
    int lcm = a*b / p;
    cout<<lcm;
   }