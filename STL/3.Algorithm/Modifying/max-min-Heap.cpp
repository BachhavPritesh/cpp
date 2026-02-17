#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores = {85, 90, 78, 92, 88};
    vector<int> values = {4,5,3,2,1};

   make_heap(scores.begin(),scores.end());
   make_heap(values.begin(), values.end(), greater<int>()); //minheap

   for(const auto& x : scores){
    cout<<x<< " " <<endl;
   }
   
   for(const auto& y : values){
    cout<<y<< " " <<endl;
   }
    return 0;
}