#include <iostream>
using namespace std;
#include<vector>
#include<stack>
int main (){
    stack<int>st;
    st.push(10);
    st.push(5);
    st.push(140);
    st.push(105);
    st.push(1);
    st.push(6);
    st.push(3);
    cout<< "Result=" << st.empty()<<"\n";
    cout<< st.top() << "\n";
    while(!st.empty()){
        cout<< st.top() << "\n";
        st.pop();
    }
    cout << "result=" << st.empty() <<"\n";
}