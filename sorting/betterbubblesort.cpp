#include <iostream>
#include<vector>

using namespace std;
 
void betterbubblesort(vector<int>& res){
    int n=res.size();
    int count=0;
    bool flag = false;
    for(int  i=0;i<=n-1;i++){
        flag =false;
        for(int j=0;j<n-i-1;i++){
            count++;
            if(res[j] > res[j+1]){
                swap(res[j],res[j+1]);
                flag=true;
            }
        }
        
    }
    cout<<count<<endl;

}
int main() {
 int n;
 cout<<" enter number of elements";
 cin>>n;
 cout<<"enter the elements"<<endl;
    vector<int>res(n);
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    betterbubblesort(res);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}