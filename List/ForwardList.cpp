#include <iostream>
using namespace std;
#include <forward_list>
int main(){
    forward_list<int>f;
    f.push_front(1);
    f.push_front(10);
    f.push_front(18);
    f.push_front(11);
    f.push_front(90);
    f.push_front(2);
    f.push_front(8);
    f.sort();
    f.unique();
    for(auto p:f){
        cout << "p" << "\t";
    }
    f.pop_front();
    cout<<"after delete" << "\n";
    for(auto p:f){
        cout << p << "\t";
    }
    cout << "lentgth=" << distance(f.begin(), f.end());
    cout << "\n";
    f.reverse();
    cout << "After revewrse" <<"\n";
    for(auto p:f){
        cout << p << "\n";
    }
    cout << "\n merge";
    forward_list<int>f1{50, 2,4,101,7,1};
    forward_list<int>f2{60, 20,40,5,70,12};
    f1.sort();
    f2.sort();
    cout << "f1 f1data" << "\n";
    for(auto p:f1){
        cout << p << "\n";
    }
       cout << "f2 f1data" << "\n";
    for(auto p:f2){
        cout << p << "\n";
    }
    f1.merge(f2);
    cout << "After merging data of f1" << "\n";
    for(auto p:f1){
        cout << p << "\t";
    }
}