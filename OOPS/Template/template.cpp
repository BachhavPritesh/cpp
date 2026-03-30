// In C++, a template allows you to write generic and reusable code that works with different data types.

// 🔹 What is a Template?

// A template is a blueprint for creating functions or classes that can operate with any data type.

#include <iostream>
using namespace std;

template <class T1, class T2>
 void add(T1 a, T2 b) {
   cout<<a+b<<endl;
}

int main() {
 
    add(1,4);
    add(5.4,2);
  
    return 0;
}