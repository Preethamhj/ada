#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>>res(5,vector<int>(5));
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>res[i][j];
            if(res[i][j]){
                a=i;
                b=j;
            }
        }
    }
    a=abs(a-2);
    b=abs(b-2);
    cout<<a+b;
    return 0;

    

}