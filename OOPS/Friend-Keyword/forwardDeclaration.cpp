// //In C++, a forward declaration means declaring something before its full definition so the compiler knows it exists.

// It tells the compiler:
// ➡ “This class/function exists somewhere later in the code.”

// 2️⃣ Why Forward Declaration is Needed

// It is used when two classes depend on each other.

// Example situation:

// Triangle has a friend function that uses Rectangle

// But Rectangle is defined later

// Without forward declaration, the compiler doesn't know what Rectangle is.


#include <iostream>
using namespace std;

class Rectangle; // forward declaration

class Triangle{
private:
    int l;
public:
    Triangle(int len){
        l = len;
    }

    friend void f1(Triangle& para, Rectangle& s);
};

class Rectangle{
private:
    int l;
public:
    Rectangle(int len){
        l = len;
    }

    friend void f1(Triangle& para, Rectangle& s);
};

void f1(Triangle& para, Rectangle& s){
    cout<<"The length of triangle side: "<<para.l<<endl;
    cout<<"The length of rectangle: "<<s.l<<endl;
}

int main() {
   Triangle t1(20);
   Rectangle r1(30);

   f1(t1, r1);

   return 0;
}