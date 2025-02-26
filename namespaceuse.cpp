#include <iostream>
using namespace std;
namespace cybrom
{
    void student(){
        cout << "\n student \n";
    }
    namespace bhopal{
        void student()
        {
            cout << "\n bhopal \n";
        }
    }
}
int main(){
    cybrom::student();
    cybrom::bhopal::student();
}