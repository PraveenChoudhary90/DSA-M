#include <iostream>
using namespace std;
template<typename x1 , typename x2>
class bhopal{
    public:void sum(x1 t1, x2 t2){
        cout << t1+t2 << "\n";
    }
};
int main(){
    bhopal <int, double>b;
    b.sum(3,4.6);
}