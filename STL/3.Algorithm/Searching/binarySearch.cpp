#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> scores = {78, 85, 88, 90, 92};  // Already sorted

  bool found = binary_search(scores.begin(),scores.end(),88);
  if(found){
    cout<<"FOUND";
  }
  else{
    cout<<"not found";
  }

    return 0;
}