#include<iostream>
using namespace std;

class cricket{
    public:
    string name;
    int runs;
    cricket(){}
    cricket(string name, int runs){
        this->name = name;
        this-> runs = runs;
    }
};
int main(){
    cricket c;
    c.name="sachin";
    c.runs=100;
    cricket  *p = &c;
    cout<<c.name<<endl;
    cout<<c.runs;
    cricket d;
    d.name="dhoni";
    d.runs=80;
    cout<<d.name<<endl;
    return 0;
}