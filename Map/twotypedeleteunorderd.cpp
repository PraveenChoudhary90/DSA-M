#include <iostream>
#include <map>
using namespace std;
int main(){
    multimap<int, string>mp;
    mp.insert({104, "praveen"});
    mp.insert({704, "anu"});
    mp.insert({10, "pradum"});
    mp.insert({10, "chotu"});
    for(auto p:mp){
        cout << p.first << ":" << p.second << "\n";
    }
    // auto t = up.erase(10);
    auto t= mp.find(10);
    if(t!=mp.end()){
        mp.erase(t);
    }
    else{
        cout << "NOT FOUND ANY MAP" << "\n";
    }
    for(auto p:mp){
        cout << p.first << ":" << p.second << "\n";
    }
}