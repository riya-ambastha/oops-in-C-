#include<iostream>
using namespace std;
class Base {
public:
    void show() {
        cout << "Base class\n";
    }
};

int main() {
    void (Base::*ptr)() = &Base::show;
    Base obj;
    (obj.*ptr)();
}
