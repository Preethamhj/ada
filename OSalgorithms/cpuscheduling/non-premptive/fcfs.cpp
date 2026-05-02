#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
class P{
    public :
    int pid;
    int AT;
    int BT;
    int TAT;
    int RT;
    int WT;
    int CT;
};

void fcfs(vector<P>&p,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(p[j].AT > p[j+1].AT ){
                swap(p[j] , p[j+1]);
            }
        }
        int time=0;
        for(int i=0;i<n;i++){
            p[i].RT=time;
            time += p[i].BT;
            p[i].TAT = time - p[i].AT;
            p[i].WT = p[i].TAT - p[i].BT;
            p[i].CT = time;

        }
    }
}
int main(){
    int n;
    cout<<"enter the  number of process";
    cin>>n;
    cout<<"enter the  process details";
    vector<P> p(n);
    for(int i=0;i<n;i++){
        cout<<"\npid:";
        cin>>p[i].pid;
        cout<<"AT:";
        cin>>p[i].AT;
        cout<<"BT:";
        cin>>p[i].BT;
    }
        fcfs(p,n);
    cout<<"\n the process details is "<<endl;
    cout<<" pid \tAT \tBT\t CT\t TAT\t WT\t RT\n";
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" \t"<<p[i].AT<<" \t"<<p[i].BT<<" \t"<<p[i].CT<<" \t"<<p[i].TAT<<" \t"<<p[i].WT<<" \t"<<p[i].RT<<endl;
    }

}