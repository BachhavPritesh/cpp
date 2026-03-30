// 🧠 Abstraction in C++

// Abstraction means hiding internal implementation details and showing only the essential features of an object.

// 👉 “User ko sirf what to do dikhana, how it works nahi.”

// 🎯 Real-Life Example

// Think of a car 🚗:

// You use: steering, accelerator, brake
// You don’t see: engine working, fuel injection, wiring

// 👉 That’s abstraction.

// 💻 Abstraction in C++

// In C++, abstraction is achieved using:

// Classes
// Access specifiers (private, public)
// Abstract classes (pure virtual functions)

//Implement using "pure virtual function" then the class turn in abstraction class and we cannot create a object of
//abstraction class

//Abstraction class -> What to do? extended Children Class-> How to do ? also in children class we have to define Pure virtual function
//In abstraction class -> Normal Datamembers + Function Members can be used!

#include <iostream>
using namespace std;

class Car{
public:
//by using virtual function we will list out those neccesary info which has to shown to user...

virtual void engineInfo()=0;
virtual void breakInfo()=0;

private:
int A = 120;

};

class Tata : public Car{

public:

void engineInfo(){
cout<<"Engine started with key"<<endl;
}

virtual void breakInfo(){
    cout<<"The break is used to stop the car"<<endl;
}

};

int main(){
    Tata t1;
    t1.engineInfo();
    t1.breakInfo();

    return 0;
}