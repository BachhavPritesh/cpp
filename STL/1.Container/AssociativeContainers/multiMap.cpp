#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm;
    mm.insert({1, "Arjun"});
    mm.insert({2, "Bhavin"});
    mm.insert({1, ""}); // Duplicate key 1 allowed

    for (auto& [key, value] : mm) {
        cout << key << ": " << value << endl;
    }
    return 0;
}