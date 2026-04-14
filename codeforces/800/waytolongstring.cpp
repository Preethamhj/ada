//A. Way Too Long Words
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>s(n);

    for(int i=0;i<n;i++){
        cin>>s[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        string p = s[i];
        int k =p.size()-2;
        if(p.size()>10){
            p = p[0]+to_string(k)+p[p.size()-1];
        }
        cout<<p<<endl;
    }
  
    return 0;
}