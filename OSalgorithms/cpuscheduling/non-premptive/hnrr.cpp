#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class P {
    int pid ,bt,at, wt ,rt, tat,ct;
    float rr;
    bool done;
};
int main(){
    int n;
    cout<<"enter the number of process"<<endl;
    cin>>n;
    vector<P>p(n);
    cout<<" enter the  pid, at ,bt"<<endl;
    for(int i=0;i<n;i++){
        cin>>p[i].pid>>p[i].at>>p[i].bt;
    }
    
}