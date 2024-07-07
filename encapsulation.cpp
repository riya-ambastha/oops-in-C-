#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    emp.setSalary(50000);
    cout << emp.getSalary();
}
