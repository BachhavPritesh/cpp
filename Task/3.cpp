#include<iostream>


// Private Static Member:

// Config class: 

// private static int value=0; 

// static setter setValue(int v), static getter getValue(). 

// Main: Config::setValue(42);
//  cout << Config::getValue() → 42.
// ​

// Online C++ compiler to run C++ program online

using namespace std;

class Config{
    private:
    static int value;
    public:
    static void setValue(int v) {
        value = v;
    }

    
    static int getValue() {
        return value;
    }
};

int Config::value = 0;

int main() {
    
    Config::setValue(5);
    
    cout<<Config::getValue();

    return 0;
}