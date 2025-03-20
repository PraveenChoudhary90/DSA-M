#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, string>mp{{101,"amit"},{100,"sumit"},{102,"praveen"}};
    for(auto p:mp){
        cout << p.first << ":" << p.second << "\n";
    }
    map<string, int>student{{"anuj", 12}, {"ashk", 23}, {"amit", 20}};{
        for(auto i = student.begin();i!=student.end();i++){
          cout << i->first << i->second << "\n";  
        }
    }
}