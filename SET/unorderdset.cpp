#include <iostream>
using namespace std;
#include <unordered_set>
int main(){
    unordered_set<int>s{20,4,1,3,6};
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