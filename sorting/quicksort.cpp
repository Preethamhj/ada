#include<iostream>
#include<vector> 

using namespace std;

int main(){
     int n;
     cout<<"enter  n value ";
     cin>>n;
     vector<int>res(n);

     cout<<"enter the  elements ";
     for(int i=0;i<n;i++){
          cin>>res[i];
     }

       for(int i=0;i<n;i++){
          cout<<res[i]<<"  ";
     }
}