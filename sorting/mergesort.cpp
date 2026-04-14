#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& res,int start ,int end , int mid ){
    vector<int>temp;
    int i=start;
    int j= mid+1;
    while(i <= mid && j <= end){
        if(res[i] >= res[j]){
            temp.push_back(res[j]);
            j++;
        }else{
            temp.push_back(res[i]);
            i++;
        }
    }
    while(i<=mid){
        temp.push_back(res[i++]);

    }
    while(j<=end)temp.push_back(res[j++]);

    for(int k=0;k<temp.size();k++){
        res[start+k]=temp[k];
    }
}
void mergesort(vector<int>& res,int start,int end){
    if(start >= end)return ;
    int mid = start +(end - start) /2;

    mergesort(res,start,mid);
    mergesort(res, mid+1 , end);
    merge(res ,start,end,mid);
    
}
int main(){
    int n;
    cout<<" enter the  number  of elements"<<endl;
    cin>>n;
    vector<int> res(n);
    cout<<" enter the  values "<<endl;
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    mergesort(res,0,res.size()-1);
    for(int i=0;i<n;i++){
        cout<<res[i]<<"  ";
    }
}