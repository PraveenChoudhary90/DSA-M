#include <iostream>
using namespace std;
#include<vector>
#include<iterator>
int main(){
    vector<int>vec;
    int n, a;
    cout << "Enter the size of vector\n";
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout << "Enter values" << "\n";
        cin>>a;
        vec.push_back(a);
    }
    cout << "here is all aboout the vector data" << "\n";
    for(auto p:vec){
        cout << p << "\t";
    }
    cout << "\n";
    vec.pop_back();
    cout << "After delete" << "\n";
     for(auto p:vec){
        cout << p << "\t";
    }
    // cout << "iterator insert being";
    // vector<int>::iterator it=vec.begin();
    // vec.insert(it+2, 780);
    // cout << "after insert at 0 location" <<"\n";
    // for(auto p:vec){
    //     cout<< p << "\t";
    // }
    cout << "iterator insert end" << "\n";
     vector<int>::iterator it=vec.end();
    vec.insert(it-2, 780);
    cout << "after insert at 0 location" <<"\n";
    for(auto p:vec){
        cout<< p << "\t";
    }
}