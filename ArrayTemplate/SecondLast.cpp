#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main(){
    array<int , 6>arr{10,32,4,3,5,7};
    sort(arr.begin(), arr.end());
    // cout << *(arr.end()-2) <<"\n"; 1,4,5,6,7,8[end]-2
    cout << arr[arr.size()-2] << "\n";
}