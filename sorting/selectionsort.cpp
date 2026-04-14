#include<iostream>
#include<vector>
#include<algorithm>

 
using namespace std;
void selectionsort(vector<int>& res){
    int min=0;
    int n=res.size();
    for(int i=0;i<res.size();i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(res[min]>res[j]){
                min=j;
            }
        }
        swap(res[min],res[i]);

    }
}
int main(){
    int n;
    cout<<" enter the number of elements"<<endl;
    cin>>n;
    cout<<" enter the  elements"<<endl;
    vector<int>res(n);
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    selectionsort(res);
    for(int i=0;i<n;i++){
        cout<<res[i]<<"  ";
    }

}
//there is no optimization of it and  all its  cases are  o(n^2)