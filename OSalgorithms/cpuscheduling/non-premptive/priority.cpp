#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class P{ 
    public:
    int pid ,at,bt,wt,rt,tat,p,ct;
    bool done;
};


int main(){
    int n;
    cout<<" enter the  number of  process";
    cin>>n;
    vector<P> p(n);
    cout<<" enter the  pid , priority , at , bt ";
    for(int i=0;i<n;i++){
        cin>>p[i].pid>>p[i].p>>p[i].at>>p[i].bt;
        p[i].done =false;
    }

    cout<<" "<<endl;
    int time =0;
    int index= -1,min1 = INT_MAX;
    int count=0;
    while(count != n){
        min1= INT_MAX;
        index=-1;
        
        for(int i=0;i<n;i++){
            if(!p[i].done && time >= p[i].at){
                if(min1 >p[i].p){
                    index=i;
                    min1=p[i].p;
                }
            }
        }
        if(index == -1){
            time++;
            continue;
        }
        p[index].rt = time;
        time+=p[index].bt;
        p[index].ct = time;
        p[index].tat =p[index].ct - p[index].at;
        p[index].wt = p[index].tat - p[index].bt;
        p[index].done =true;
        count++;

    }
    
    cout<<"priority \t pid \t bt \t at \t ct \t tat \t rt \t wt \n";
    for(int i=0;i<n;i++){
        cout<<p[i].p<<"\t"<<p[i].pid<<"\t"<<p[i].bt<<"\t"<<p[i].at<<"\t"<<p[i].ct<<"\t"<<p[i].tat<<"\t"<<p[i].rt<<"\t"<<p[i].wt<<"\n";
    }
}