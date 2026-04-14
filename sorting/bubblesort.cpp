#include<iostream>
#include<vector>

using namespace std;
int count = 0;
void bubblesort(vector<int>& res){
    int n = res.size();
    for(int i=0;i<res.size()-1;i++){
        for(int j=0;j<n-i-1;j++){
                            count++;
            if(res[j] > res[j+1]){
                int temp = res[j];
                res[j] = res[j+1];
                res[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<" enter the number of elements"<<endl;
    cin>>n;
    vector<int>res(n);
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    cout<<" the  vector before  bubble sort "<<endl;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    bubblesort(res);
    cout<<" the  vector after  bubble sort "<<endl;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n the count = "<<count;
    return 0;
}