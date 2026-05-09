#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(7);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<7;j++){
            cin>>a[j];
            sum+=a[j];
        }
        int max1 = * max_element(a.begin(),a.end());
        cout<<(2*max1-sum)<<endl;
    }
}