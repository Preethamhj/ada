#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;
    vector<string>operations(n);
    for(int i=0;i<n;i++){
        cin>>operations[i];
    }
    for(string s : operations){
        if(s[0] == '+'){
            ++x;
        }else if(s[0] == '-'){
            --x;
        }else if(s[1] == '+'){
            x++;
        }else {
            x--;
        }
    }
    cout<<x;
}