#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(){
    // // vector<int>v{12,3,4,55};
    // cout << "size=" << v.size() << "\n";
    // cout << "capacity=" << v.capacity() << "\n";
    vector<int>v;
    v.push_back(23);
    v.push_back(2);
    v.push_back(29);
    v.push_back(90);
    v.push_back(100);
    cout << "size=" <<v.size();
    cout << "capacity=" <<v.capacity();
}
