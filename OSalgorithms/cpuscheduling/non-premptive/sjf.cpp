#include<iostream>
#include<vector>

using namespace std;

class P {
    public : 
        int pid;
        int BT;
        int AT;
        int TAT;
        int RT;
        int CT;
        int WT;
};

void sjf(vector<P>&p,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(p[j].BT > p[j+1].BT){
                swap(p[j].BT,p[j+1].BT);
            }
        }
    }
    int time1=0;
    for(int i=0;i<n;i++){
        p[i].RT = time1;
        time1+=p[i].BT;
        p[i].CT = time1;
        p[i].TAT = p[i].CT - p[i].AT;
        p[i].WT = p[i].TAT - p[i].BT;
    }
}
int main(){
    int n;
    cout<<"enter the number of process";
    cin>>n;
    vector<P> p(n);
    for(int i=0;i<n;i++){
        cout<<"enter pid , bt,at ";
        cin>>p[i].pid>>p[i].BT>>p[i].AT;
    }
    sjf(p,n);
    cout<<"the output of it is ";
    cout<<"\n pid \t BT \t AT \t CT \t WT \t RT \t TAT \n";
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" \t"<<p[i].BT<<" \t "<<p[i].AT<<" \t "<<p[i].CT<<" \t "<<p[i].WT<<" \t "<<p[i].RT<<" \t "<<p[i].TAT<<endl;
    }
}