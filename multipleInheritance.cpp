#include<iostream>
#include<string>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A\n";
    }
};

class B {
public:
    void display() {
        cout << "Class B\n";
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.A::display();
    obj.B::display();
}
