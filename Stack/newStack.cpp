#include <iostream>
using namespace std;
class stacks
{
    public:int *arr;
    int n, top;
    stacks(int s)
    {
        n=s;
        arr=new int[n];
        top=-1;
    }
    void pushs(int a){
        if(top==n-1){
            cout<<" overflow" <<"\n";
            return;
        }
        top++;
        arr[top]==a;
    }
    int pops()
    {
        if(top==-1){
            cout<<"underflow"<<"\n";
            return -1;
        }
        return top--;
    }
    int tops()
    {
        if(top==-1){
            cout<<"there is no element"<<"\n";
            return -1;
        }
        return arr[top];
    }
};
int main(){
    int val;
    cout<<"enter size"<<"\n";
    cin>>val;
    int c;
    stacks st(val);
    for(int i=1; i<=val; i++){
        cout<<"enter the value"<<"\n";
        cin>>c;
        st.pushs(c);
    }
    while(st.top!=-1){
        cout<<"top values="<<st.tops()<<"\n";
        st.pops();
    }
    cout << "top values==" <<st.tops()<<"\n";
    st.pops();
    cout << "Top values==" << st.tops() << "\n";
}