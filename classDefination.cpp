#include<iostream>
#include<string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;
}
