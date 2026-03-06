// Members declared as protected cannot be accessed outside the class, but can be accessed in derived (child) classes.

#include <iostream>
using namespace std;

class A {
protected:
    int x;
};

class B : public A {
public:
    void set() {
        x = 10;
        cout<<x<<endl;
    }
};

int main()
{

B b1;
b1.set();


    return 0;
}