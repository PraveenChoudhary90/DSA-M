#include <iostream>
using namespace std;
#include <set>
int main(){
    multiset<int>s{20,4,2,5,4,2,1,3,6};
    for(auto p:s){
        cout << p << "\t";
    }
     s.insert(7);
    cout << "\n";
    for(auto p:s){
        cout << p << "\t";
    }
    s.erase(20);
    cout << "\n";
    for(auto p:s){
        cout << p << "\t";
    }
    auto t= s.find(33);
    if(t!=s.end()){
        cout << "Found" <<*t << "\t";
    }
        else{
         cout << "Not Found" <<"\n";

        }
}