#include<iostream>
#include<algorithm>
#include<vector> 

using namespace std;

 void insert1(vector<int> &minheap, int a){
    minheap.push_back(a);
    int i = minheap.size()-1;
    while(i>0){
        int parent = (i-1)/2;
        if(minheap[parent] > minheap[i]){
            swap(minheap[i],minheap[parent]);
            i=parent;
        }else{
            break;
        }
    }
 }
 void heapdown(vector<int>& minheap , int  i){
    int n = minheap.size();
    while(true){
        int parent = i;
        int left = i *2 +1;
        int right = i*2 +2;
        if(left<n && minheap[left] < minheap[parent])parent = left;
        if(right < n && minheap[right] < minheap[parent])parent = right;

        if( i != parent){
            swap(minheap[parent], minheap[i]);
            i =parent;
        }
        else {
            break;
        }
    }
 }

 void deleteroot(vector<int>& minheap){
    minheap[0] = minheap[minheap.size()-1];
    minheap.pop_back();
    heapdown(minheap,0);
 }
 void display(vector<int>& minheap){
    for(int i=0;i<minheap.size();i++){
        cout<<minheap[i]<<" ";

    }
 }
 int peek(vector<int> res)
{
    return res[0];
}
int main(){
     int n;
     cout<<" enter the  value of the n "<<endl;
     cin>>n;
     int a ;
    cout<<"enter the  values";
    vector<int> minheap;
    for(int  i=0;i<n;i++){
        cin>>a;
        insert1(minheap,a);
    }
    while(true){
        cout<<" enter your choice \n 1. insert 2.delete 3.display 4. peek"<<endl;
        int p;
        cin>>p;
        switch(p){
            case 1 : cout<<" enter the  value";
                    cin>>a;
                    insert1(minheap,a);
                    break;
            case 2 : 
                    deleteroot(minheap);
                    break;

            case 3 : 
                    display(minheap);
                    break;
            case 4 : 
                    cout<<peek(minheap);
                    break;
            default: 
                    cout<<" invalid number \n ";
        }
    }

}