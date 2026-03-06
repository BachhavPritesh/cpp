// Members declared as private can only be accessed inside the same class.

#include <iostream>
#include <string>
using namespace std;

class BankAcc{
    public:
    
    string userName;
    
    private:
    
    int bankBalance;
    
    public:
    
    BankAcc(string name,int balance){
        userName = name;
        bankBalance = balance;
    }
    
    void dis(){
        cout<<"account holder name is: "<<userName<<" and bank balance is "<<bankBalance;
    }
};

int main()
{
     BankAcc p1("bablu",150);
     p1.dis();
    
    
    return 0;
}