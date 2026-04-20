#include<iostream>
#include<vector>

using namespace  std;
/*int partition(vector<int>&res,int low,int high){
     int pivolt = res[high];
     int i=low-1;
     cout<<"in partiotion";
     for(int j=low;j<high;j++){
          if(res[j] < pivolt){
               i++;
               swap(res[i],res[j]);
          }
     }
     swap(res[i+1],res[high]);
     return i+1;
}
*/
// hoare partition 
int partition(vector<int>& res , int low ,int high){
     int pivolt = res[high];
     int i= low-1;
     int j= high+1;

     while(true){
          do{
               i++;
          }while(res[i] < pivolt);
     
     do{
          j--;
     }while(res[j]> pivolt);
     if(i >= j)return j;

     swap(res[i],res[j]);
     }
     
}
void quicksort(vector<int>&res ,int low,int high)
{   
     if(low < high){
          int p = partition(res, low, high);
          quicksort(res,low ,p-1);
          quicksort(res,p+1,high);
     }
}
int main(){
     int n;
     cin>>n;
     vector<int>res(n);
     cout<<" enter the data ";
     for(int i=0;i<n;i++){
          cin>>res[i];

     }
     quicksort(res, 0,n-1);
     for(int i=0;i<n;i++){
          cout<<res[i]<<" ";
     }
}