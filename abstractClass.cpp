#include<iostream>
#include<string>
using namespace std;
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle\n";
    }
};

int main() {
    Circle c;
    c.draw();
}
