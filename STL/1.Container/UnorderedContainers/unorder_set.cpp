#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
unordered_set<int> s = {1,4,5};
s.insert(3);
s.erase(4);

for(int value : s){
    cout<<value<<endl;
}

    return 0;
}