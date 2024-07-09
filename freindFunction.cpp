#include<iostream>
#include<string>

using namespace std;
class Box {
private:
    int width;

public:
    friend void printWidth(Box b);
    void setWidth(int w) {
        width = w;
    }
};

void printWidth(Box b) {
    cout << "Width: " << b.width << endl;
}

int main() {
    Box box;
    box.setWidth(10);
    printWidth(box);
    
}
