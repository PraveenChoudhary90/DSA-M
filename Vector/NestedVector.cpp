#include <iostream>
using namespace std;
#include <vector>
int main(){

    vector<vector<int>>v1;
    int row,col;
    int val;
    cout << "Enter the size of row" << "\n";
    cin >> row;
    cout << "Enter the size of col" << "\n";
    cin>> col;
    for(int i=0;i<row;i++){
        vector<int>v2;
        {
            for(int j = 0;j<col;j++){
                cout << "Enter the values" << "\n";
                cin >> val;
                v2.push_back(val);
            }
            v1.push_back(v2);
        }
    }
    cout << "Store the values in 2d vector" << "\n";
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[i].size();j++){
            cout << v1[i][j] << "\t";
        }
        cout << "\n";
    }
 

}