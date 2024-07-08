#include<iostream>
#include<string>
using namespace std;

class Box {
public:
    int length;

    Box(int l) : length(l) {}

    Box(const Box &obj) {
        length = obj.length;
    }
};

int main() {
    Box box1(10);
    Box box2 = box1;
    cout << "Box2 length: " << box2.length;
}
