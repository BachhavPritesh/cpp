// 🔹 Polymorphism in C++

// Polymorphism means “many forms.”
// In C++, polymorphism allows the same function or operator to behave differently depending on the object or context.

// There are two main types of polymorphism in C++:

//in a particular class we define number of same function during compile time we will decide which function to execute
//is known as compile time....

//function overloading:
//1 same class and same func name // 2 but make sure the arguments and data type is diffrent
//function overload means when you are defining same function number of time in a same class but with either different number of arguments or
//different datatype

#include<iostream>
#include <string>
using namespace std;

class Poly{
    public:
    void add(int a,int b){
        cout<<"add of two number is: "<<a+b<<endl;
    }

    void add(int a,int b,int c){
        cout<< "The add of three number is: "<<a+b+c<<endl;
    }

    void add(string a,string b){
        cout<<"The concatanation of two strings is: "<<a+b<<endl;
    }

};

int main(){

Poly p1;
p1.add(1,2);

    return 0;
}

