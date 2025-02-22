#include <iostream>
using namespace std;
template<typename t1>
t1 sum(t1 a, t1 b){
    return a+b;
}
int main(){
    cout<< "sum=" <<sum(4.5,9.7) <<"\n";
}