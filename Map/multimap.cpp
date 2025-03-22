#include <iostream>
#include <map>
using namespace std;
int main(){
    multimap<int, string>up;
    up.insert({104, "praveen"});
    up.insert({704, "anu"});
    up.insert({10, "chotu"});
    for(auto p:up){
        cout << p.first << ":" << p.second << "\n";
    }
}