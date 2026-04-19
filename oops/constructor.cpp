// constructor is a special member function 
// it as 3 properties 
//class name and the function name should be same  
// no return type 
// it is called automatically as the object of that is created 
//used to insitialize the  values of the member class 

#include<iostream>

using namespace  std;

class abc {
    public :
        int a, b;
        abc(int a, int b){
            a= a;
            b=b;
            cout<<a<<" "<<b;
        }
};
int main(){
abc a = abc(99,90);
}