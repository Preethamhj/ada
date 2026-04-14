#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n;
    cout<<" enter the number of elements "<<endl;
    cin>>n;
    vector<int> res(n);
    cout<<" enter the  elements value "<<endl;
    for(int i=0;i<n;i++)cin>>res[i];
     int k;
     cout<<" enter the  k value ";
     cin>>k;

    return 0;

}
