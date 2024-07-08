#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating...";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking...";
    }
};

int main() {
    Dog myDog;
    myDog.eat();
    myDog.bark();
}
