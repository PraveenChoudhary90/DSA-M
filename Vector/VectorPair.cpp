#include <iostream>
using namespace std;
#include<vector>
int main(){
    vector<pair<int , string>>v;
    int roll, n;
    string name;
    cout << "Enter how manny records" << "\n";
    cin >> n;
    for(int i = 1;i<=n;i++){
        cout << "Enter the rollno" << "\n";
        cin >> roll;
        cout << "Enter the Name" << "\n";
        cin >> name;
        v.push_back(make_pair(roll, name));
        // v.push_back({roll, name});
    }
    cout << "Results are" << "\n";
    for(int i = 0;i<v.size();i++){
        cout << v[i].first << ":" << v[i].second << "\n";
    }
}