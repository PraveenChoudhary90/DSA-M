#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main(){
    array<int , 6>arr{10,32,4,3,5,7};
    sort(arr.begin(), arr.end());
    // cout << *(arr.end()-2) <<"\n";
    cout << arr[arr.size()-2] << "\n";
}