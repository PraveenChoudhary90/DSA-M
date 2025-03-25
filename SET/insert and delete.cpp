#include <iostream>
using namespace std;
#include <set>
int main(){
    multiset<int>s{20,4,1,3,6,5,4,3,20,2,2,1,11,6};
    for(auto p:s){
        cout << p << "\t";
    }
     s.insert(7);
    cout << "\n";
    for(auto p:s){
        cout << p << "\t";
    }
    cout << "\n";
    cout << "value base delete" << "\n";
    s.erase(20);
    cout << "\n";
    for(auto p:s){
        cout << p << "\t";
    }
    cout << "\n";
    cout << "Pointer base delete " <<"\n";
    auto t= s.find(3);
    if(t!=s.end()){
         s.erase(t);
    }
        cout << "After delete " << "\n";

        for(auto t:s){
            cout << t << "\t";
         }
}