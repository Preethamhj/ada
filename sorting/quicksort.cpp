#include<iostream>
#include<vector> 

using namespace std;

int partition(vector<int>& res , int low ,int high){
     int pivolt = res[high];
     int i=low-1;
     for(int j=low;j<high;j++){
          if(res[j]< pivolt){
               i++;
               swap(res[i],res[j]);
          }
     }
     swap(res[i+1],res[high]);
     return i+1;
}
void quicksort(vector<int>&res,int low ,int high){
     if(high < low ){
          int pi= partition(res,low ,high);
          quicksort(res,low ,pi);
          quicksort(res, pi+1,high);
     }
}
int main(){
     int n;
     cout<<"enter  n value ";
     cin>>n;
     vector<int>res(n);

     cout<<"enter the  elements ";
     for(int i=0;i<n;i++){
          cin>>res[i];
     }
     quicksort(res,0,res.size()-1);
     
       for(int i=0;i<n;i++){
          cout<<res[i]<<"  ";
     }
}