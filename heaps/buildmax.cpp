// building the maxheap using the  array 
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void insert1(vector<int>& res,int key){
    res.push_back(key);
    int i = res.size()-1;
    while(i>0){
        if(res[i] > res[(i-1)/2]){
            swap(res[i] , res[(i-1)/2]);
            i= (i-1)/2;
        }else{
            break;
        } 
    }
 }

 void display(vector<int> res){
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
 }

 int peek(vector<int> res){
    return res[0];
 }

 void heapdown(vector<int>& res, int i){
    int n = res.size();
    while(true ){
        int largest = i;
        int left = i*2+1;
        int right = i*2 + 2;
        if(left < n && res[left]> res[i])largest = left;
        if(right < n && res[right]> res[i])largest = right;
        if(i != largest){
            swap(res[i] , res[largest]);
            i = largest;
        }
        else {
            break;
        }
    }
 }

 void deleteroot(vector<int>&res){
    res[0]=res[res.size()-1];
    res.pop_back();
    heapdown(res, 0);
    
 }

int main(){
    int n;
    cout<<" enter the  number of elements"<<endl;
    cin>>n;
    vector<int>res;
    int a ;
     cout<<" enter the  values "<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        insert1(res,a);
    }
    while(true ){
        cout<<" enter the choice"<<endl;
        cout<<" 1. insert 2.delete 3 .peek  4. display"<<endl;
        int p;
        cin>>p;
        switch(p){
            case 1 : 
                    cout<<"enter the value ";
                    cin>>a;
                    insert1(res,a);
                    break;
            case 2 : 
                    deleteroot(res);
                    break;
            case 3 : 
                    cout<<peek(res);
                    break;
            case 4 : 
                    display(res);
                    break;
            default : 
                    cout<<" invalid statment";

        }
    }
   
   return 0;
}