#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class j {
    public:

    int delay ,profit;
};
bool compare(j a , j b){
    return a.profit > b.profit;
}
int main(){
    int n;
    cout<<" enter the  number of jobs "<<endl;
    cin>>n;
    cout<<"enter the jobs deadline and the  profit from it";
    vector<j>res(n);
    for(int i=0;i<n;i++){
        cin>>res[i].delay>>res[i].profit;
    }
    sort(res.begin(),res.end(),compare);
    int max_deadline=-1;
    for(int i=0;i<n;i++){
        max_deadline = max(res[i].delay , max_deadline);
    }
    vector<int>slot(max_deadline+1 ,-1);

    int total=0;
    for(int i=0;i<n;i++){
        for(int j=res[i].delay;j>0;j--){
            if(slot[j]==-1){
                total+=res[i].profit;
                slot[j]=i;
                break;
            }
        }
    }
    cout<<" the total profit is "<<total;

}