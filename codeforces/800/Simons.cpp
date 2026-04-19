#include<iostream>
#include<math.h>
using namespace std;
 long long  power(long long a, long long n){
    long long int result =1;
    while(n >0){
        if(n%2 == 0){
            result*=a;
            
        a *= a;
        n /= 2;
        }
    }
    return result;
 }

int main(){
    int  n;
    cin>>n;
    long long int  k,p;
    for(int i=0;i<n;i++){
        cin>>k;
        for(long long int  j=1;j<k;j++){
            int a =power(j,k);
            if(a % k== 0){
                cout<<j;
                break;
        }
    }
}
}