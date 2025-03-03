#include <iostream>
using namespace std;
#include <vector>
#include<tuple>
int main(){
    tuple <int,string,int>student{101,"praveen", 86};
    // student = make_tuple(101,"praveen",86);
    cout << "Rollnumber=" <<get<0> (student) << "\n";
    cout << "Name=" <<get<1> (student) << "\n";
    cout << "Marks=" <<get<2> (student) << "\n";
}