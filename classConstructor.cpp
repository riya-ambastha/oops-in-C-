#include<iostream>
#include<string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020);
}
