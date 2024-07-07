#include<iostream>
#include<string>
using namespace std;

class Box {
public:
    Box() {
        cout << "Default constructor called";
    }

    Box(int l, int b, int h) {
        cout << "Parameterized constructor called";
    }
};

int main() {
    Box box1;
    Box box2(3, 4, 5);
}
