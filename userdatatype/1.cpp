#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollno;
    float cgpa;
    
};
    void display(Student s){
        cout<<s.name<<endl<<s.rollno<<endl<<s.cgpa;
    }
    void change(Student s){
        s.cgpa=10.0;
    }
int main(){
    Student s;
    s.name="Alice";
    s.rollno=101;   
    s.cgpa=9.5;

    display(s);
    change(s);
    cout<<"\nAfter changing CGPA:"<<endl;
    display(s);
    return 0;
}