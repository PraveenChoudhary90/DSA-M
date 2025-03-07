#include <iostream>
using namespace std;
int valid (string  s){//bool
  if(s.size()>4){
    return 1;//true
  }
  else{
    return 0;//false
  }
}
int main(){
    string s;
    cout << "Enter name";
    cin >> s;
    if(valid(s)){
        cout << "Valid" << "\n";

    }
    else{
        cout << "Invalid" << "\n";
    }
}