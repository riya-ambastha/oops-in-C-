#include<iostream>
#include<string>
using namespace std;

class Car {
public:
    Car() {
        cout << "Car created\n";
    }

    ~Car() {
        cout << "Car destroyed\n";
    }
};

int main() {
    Car myCar;
}
