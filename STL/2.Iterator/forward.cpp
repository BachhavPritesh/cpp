#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {

    list<string> s1 = {"apple", "banana"};

    auto point = s1.begin();

    while(point != s1.end()) {
        cout << "The fruits are " << *point << endl;
        ++point;
    }

    return 0;
} 