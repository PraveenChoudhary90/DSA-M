#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter the age" << "\n";
    cin >> age;
    if(age>=18){
        cout << "You can vote" << "\n";
    }
    else{
        cout << "You can not vote" << "\n";
    }
    return 0;
}
