#include<iostream>
#include<string>
using namespace std;

class parent{
public:
      void getinfo() {
        cout<<"parent class\n";
      }
};

class child{
public:
      void getinfo() {
        cout<<"child class\n";
      }
};

int main() {
    parent p1;
    p1.getinfo();
    return 0;
}