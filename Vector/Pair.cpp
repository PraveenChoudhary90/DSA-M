#include <iostream>
using namespace std;
#include <vector>
int main(){
    pair<int,string>p1 {101,"amit"};
    // p1=make-pair("101, "Praveen");another way to insert data
    cout << "rollnumber="<<p1.first << "\t";
    cout << "Name="<<p1.second << "\t";
}