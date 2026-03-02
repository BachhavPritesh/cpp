// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Lenovo{
    //function members
    
    public:
    
    void display(){
        cout<<"Lenovo called"<<endl;
    }
};

class Loq: public Lenovo{
       public:
    
     void display1(){
        cout<<"Loq called"<<endl;
    }
};

class Ligion: public Lenovo{
       public:
    
     void display2(){
        cout<<"Ligion called"<<endl;
    }
};

class Yoga: public Lenovo{
       public:
    
     void display3(){
        cout<<"Yoga called"<<endl;
    }
};


int main() {
cout<<"------------------------------------------------"<<endl;    

cout<<"For Loq"<<endl;
Loq l1;
l1.display();
l1.display1();

cout<<"------------------------------------------------"<<endl;

cout<<"For Loq"<<endl;
Ligion l2;
l2.display();
l2.display2();

cout<<"------------------------------------------------"<<endl;

cout<<"For Yoga"<<endl;
Yoga l3;
l3.display();
l3.display3();

cout<<"------------------------------------------------"<<endl;






    return 0;
}