#include<iostream>
#include<string>
using namespace std;

class student {
public:
    string name;
    
    student(){
        cout<<"non parameterised\n";
    }

    student(string name) {
        this->name = name;
        cout<<"parameterised\n";
    }
};

int main() {
    student s1("riya");
    return 0;
}