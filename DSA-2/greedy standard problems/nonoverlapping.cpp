#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool compare(pair<int,int> a , pair<int,int> b){

    return a.second < b.second;
}
int main(){
    int n;
    cout<<"enter the number of activities "<<endl;
    cin>>n;
    cout<<"enter the  start and end of each activities "<<endl;
    vector<pair<int,int>>res(n);
    for(int i=0;i<n;i++){
        cin>>res[i].first>>res[i].second;
    }
    cout<<"before sorting";
    sort(res.begin(),res.end(),compare);

    int last=res[0].second;
    cout<<" entering loop \n";
    cout<<res[0].first<<" "<<res[0].second<<endl;
    int count=0;
    for(int i=1;i<n;i++){
            if(res[i].first >= last){
                cout<<res[i].first<<" "<<res[i].second<<endl;
                last = res[i].second;
            }else{
                count++;
            }
    }
    cout<<" totaly removed intervals "<<count;

}