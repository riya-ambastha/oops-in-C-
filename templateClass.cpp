#include<iostream>
#include<string>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }
};

int main() {
    Calculator<int> calc;
    cout << calc.add(5, 3) << endl;
    cout << calc.subtract(5, 3) << endl;
}
