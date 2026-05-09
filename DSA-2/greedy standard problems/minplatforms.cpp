#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<" enter the number of trains "<<endl;
    cin>>n;
    vector<float>arr(n);
    vector<float>dep(n);
    cout<<"enter the arrival time and the departure  of each train "<<endl;
    for(int i=0;i<n;i++){
        cout<<"arrival time  and deperature time  ";
        cin>>arr[i]>>dep[i];
        cout<<"\n";
        
    }
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=1;
    int j=0;
    int count=1;
    int maxcount=1;
    while(i<n && j<n){
        if(arr[i] > dep[j]){
            j++;
            count--;
        }else{
            i++;
            count++;
        }
        maxcount = max(count , maxcount);
    }
    cout<<maxcount<<endl;

}