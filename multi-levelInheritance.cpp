#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating...\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking...\n";
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping...\n";
    }
};

int main() {
    Puppy pup;
    pup.eat();
    pup.bark();
    pup.weep();
}
