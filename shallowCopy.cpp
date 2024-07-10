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

    ~student() {
        cout<<"hi, i delete everything";
        delete cgpaPtr;
    }  
     

    void getinfo() {
        cout<<"name:"<<name<<endl;
         cout<<"cgpa:"<<*cgpaPtr<<endl;
    }
};

int main() {
    student s1("rahul" , 8.9);
    s1.getinfo();
      
    return 0;
}