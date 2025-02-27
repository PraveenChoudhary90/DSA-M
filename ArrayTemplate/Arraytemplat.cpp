#include <iostream>
using namespace std;
#include <array>
#include <algorithm>
int main(){
    array<int,6>arr{10,23,32,4,5,7};
    sort(arr.begin(), arr.end());
    cout << "min=" << arr.front();
    cout << "\n max = " << arr.back();
    cout << "Size of array="<<arr.size()<<"\n";
    for(int i = 0;i<arr.size();i++){
        cout << arr.at(i) << "\t";
    }
    cout << "frist value of array=" << arr.front();
    cout << "Second value of array=" << arr.back();

}