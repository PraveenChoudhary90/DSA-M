#include <iostream>
using namespace std;
#include <map>
int main(){
    map<int, string>mp;
    int roll, n ;
    string name;
    cout << "Enter how manny records" << "\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout << "Enter the Rollnumber" << "\n";
        cin >> roll;
        cout << "Enter the Name" << "\n";
        cin >>name;
        mp.insert({roll,name});
    }
    cout << "records are here" << "\n";
    for(auto p:mp){
        cout << p.first << ":" << p.second << "\n";
     }
     auto t= mp.find(102);
     if(t!=mp.end()){
     cout << t->first << ":" << t->second << "\n";
     }
     else{
        cout << "Not Found" << "\n";
     }
}