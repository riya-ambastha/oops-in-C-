#include<iostream>
#include<string>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    int getLength() const {
        return length;
    }
};

int main() {
    Box box(10);
    cout << box.getLength();
}
