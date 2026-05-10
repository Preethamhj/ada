#include<iostream>
#include<cmath>
#include<iomanip>

using  namespace std;

int main(){
    double m ;
    cin>>m;
    double x=0.5;
    double tolerance = 1e-7;
    cout<<fixed<<setprecision(30);

    for(int i=0;i<100;i++){
double f = cos(x) - m*x;
double df = -sin(x) - m;

double p = x - (f/df);
if(abs(p-x) < tolerance){
    cout<<p;
    break;
}
x = p;

    }
    
}