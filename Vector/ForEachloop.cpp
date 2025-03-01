#include <iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>v{2,3,4,5,6,7};
    v[1]=90;
     for(auto p:v){
        cout << p << "\t";
    }
    cout << "\n";
    vector<string>v2{"sum", "mon", "hello"};
    for(auto p:v2){
        cout << p << "\t";
    }
cout << "\n";
    vector<int>v3(5);  //default value 0 rahegi
    cout << "\n";
    for(auto k:v3){
        cout << k << "\t";
    }
    
cout << "\n";

     vector<int>v4(5,10);  //default value 10 rahegi
    cout << "\n";
    v4[3] = 2000;
    for(auto k:v4){
        cout << k << "\t";
    }
    
}