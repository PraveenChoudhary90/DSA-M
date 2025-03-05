#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool cybrom(int a , int b){
    return a>b;
}
int main(){
    vector<int>v{1,2,3,4,5,5};
    cout << [](int a){return a+2;}(5)<<"\n";
    auto p = [](int a, int b){return a+b;};
    cout<<p(45,9) << "\n";
}