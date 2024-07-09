#include<iostream>
#include<string>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class\n";
    }
};

int main() {
    Derived d;
    d.show();
}
