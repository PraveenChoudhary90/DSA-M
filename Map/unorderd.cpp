#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int, string>up;
    up.insert({104, "praveen"});
    up.insert({704, "anu"});
    up.insert({10, "chotu"});
    for(auto p:up){
        cout << p.first << ":" << p.second << "\n";
    }
}