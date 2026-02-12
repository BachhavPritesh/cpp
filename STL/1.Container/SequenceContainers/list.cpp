#include <iostream>
#include <list>
using namespace std;

int main(){

list<int> data = {10,20,30};
data.insert(data.begin(),15);

data.reverse();

for(int val : data) {
    cout << val << " "<< endl ;
}

cout<<data.size()<<endl;

data.remove(20);

 
for(int val : data) {
    cout << val << " "<< endl;
}

    return 0;
}

// Operation	Description	Example
// push_back(val)	Adds an element at the end	l.push_back(40);
// push_front(val)	Adds an element at the front	l.push_front(5);
// pop_back()	Removes the last element	l.pop_back();
// pop_front()	Removes the first element	l.pop_front();
// insert(pos, val)	Inserts an element at a given position	l.insert(l.begin(), 15);
// erase(pos)	Removes an element at a given position	l.erase(l.begin());
// remove(val)	Removes all elements matching a value	l.remove(20);
// size()	Returns the number of elements	l.size();
// reverse()	Reverses the list	l.reverse();
// sort()	Sorts the list	l.sort();