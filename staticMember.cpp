#include<iostream>
#include<string>
using namespace std;

class Box {
public:
    static int objectCount;

    Box() {
        objectCount++;
    }
};

int Box::objectCount = 0;

int main() {
    Box box1;
    Box box2;
    cout << "Total objects: " << Box::objectCount;
}
