#include<iostream>
#include<string>

using namespace std;

class student{
public:
    string name;
    double* cgpaPtr;

    student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    student(student &obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getinfo() {
        cout<<"name:"<<name<<endl;
         cout<<"cgpa:"<<*cgpaPtr<<endl;
    }
};

int main() {
    student s1("rahul" , 8.9);
    student s2(s1);

     s1.getinfo();
     *(s2.cgpaPtr)= 9.2;
     s1.getinfo();
    return 0;
}