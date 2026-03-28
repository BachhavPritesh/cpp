// In C++, a template allows you to write generic and reusable code that works with different data types.

// 🔹 What is a Template?

// A template is a blueprint for creating functions or classes that can operate with any data type.

// FUNCTION:

// #include <iostream>
// using namespace std;

// template <class T1, class T2>
//  void add(T1 a, T2 b) {
//    cout<<a+b<<endl;
// }

// int main() {

//     add(1,4);
//     add(5.4,2);

//     return 0;
// }

// CLASS

#include <iostream>
using namespace std;

template <class T1, class T2>

class Pair
{
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b)
    {
        first = a;
        second = b;
    }

    void display()
    {
        cout << "First value is ->|" << first << "|second is ->|" << second << "|" << endl;
    }
};

int main()
{

    Pair<int, float> p1(1, 3.5);
    p1.display();

    return 0;
}