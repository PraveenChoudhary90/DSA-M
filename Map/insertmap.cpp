#include <iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>mp;
    mp.insert({101,21});
    mp.insert({120,22});
    mp.insert({10,19});
    mp[109]=18;
    mp[55];
    mp[55]++;
    for(auto p:mp){
        cout<< p.first<<":"<<p.second << "\n";
    }
}