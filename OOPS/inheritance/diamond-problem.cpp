// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void display() {
//         cout << "Display from Parent" << endl;
//     }
// };

// class Child1 : public Parent {};
// class Child2 : public Parent {};

// class GrandChild : public Child1, public Child2 {};

// int main() {
//     GrandChild obj; 
//     obj.display();
//     obj.display();

//     return 0;
// }


//solution 1 scope resolution


// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void display() {
//         cout << "Display from Parent" << endl;
//     }
// };

// class Child1 : public Parent {};
// class Child2 : public Parent {};

// class GrandChild : public Child1, public Child2 {};

// int main() {
//     GrandChild obj; 
    
//     //scope resolution  if we dont use it it will throw ambigious error due to two same copies of parent exists in child1,2

//     obj.Child1::display(); 
//     obj.Child2::display();  

//     return 0;
// }

//solution 2 with virtual

#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Display from Parent" << endl;
    }
};

class Child1 : virtual public Parent {};
class Child2 : virtual public Parent {};

class GrandChild : public Child1, public Child2 {};

int main() {
    GrandChild obj;

    obj.display();   

    return 0;
}