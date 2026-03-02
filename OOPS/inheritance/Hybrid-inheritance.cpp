#include <iostream>
#include <string>
using namespace std;

class Parent1{
public:
    void display(){
        cout << "The display function defined inside Parent1 class" << endl;
    }
};

class Parent2{
public:
    void display4(){
        cout << "The display function defined inside Parent2 class" << endl;
    }
};

class Child1 : public Parent1{
public:
    void display2(){
        cout << "The display function defined inside Child1 class" << endl;
    }
};

class Child2 : public Parent1, public Parent2{
public:
    void display3(){
        cout << "The display function defined inside Child2 class" << endl;
    }
};

int main() {
cout<<"------------------------------------------------"<<endl;
    Child1 c1;
    c1.display();   
    c1.display2();  
cout<<"------------------------------------------------"<<endl;    
      Child2 c2;
    c2.display();   
    c2.display3();  
    c2.display4();
    
    cout<<"------------------------------------------------"<<endl;

    return 0;
}
