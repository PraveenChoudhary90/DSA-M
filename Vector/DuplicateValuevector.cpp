#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int main(){
    vector<int>v{2,1,2,4,5,4,1,8};
    sort(v.begin(), v.end());
    int x = 1;
    for(int a = 1;a<v.size();a++){
        if(v[x-1]!=v[a]){
            v[x]=v[a];
            x++;
        }
    }
    for(int  i = 0;i<x;i++){
        cout << "Result=" << v[i] <<"\n";
    }
}