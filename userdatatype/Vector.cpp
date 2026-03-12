#include<iostream>
using namespace std;
class Vector{
    public :
    int capacity;
    int size;
    int *arr;
    Vector(){
        size=0;
        capacity=1;
        arr=new int[capacity];
    }

    void add(int data){
        if(size == capacity){
            int * temp = new int[2*capacity];
            for(int i=0;i<size;i++){
                temp[i]=arr[i];
            }
            capacity*=2;
            arr = temp;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }

};
int main(){
    Vector v;
    v.add(10);
    v.add(20);
    v.add(30);
    v.print();

    return 0;
}
