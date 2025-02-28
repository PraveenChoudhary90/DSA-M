#include <iostream>
using namespace std;
#include <array>
#include<algorithm>
int main(){
    array<int,5>arr{5,2,1,3,5};
    // array<int , 5>arr;
    // for(int i = 0; i<arr.size();i++){
    //     cin>>arr[i];
    // }
    sort(arr.begin(), arr.end());
    cout << "second max = " <<arr[arr.size()-2]<< "\n";
    int m = arr.size()-1;
   for(int i = arr.size()-1;i>=0;i--){
      if(arr[i]<m){
        cout << "second duplicate value="<< arr[i] << "\n";
        break;
      }
    }
}