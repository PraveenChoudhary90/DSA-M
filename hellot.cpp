#include <iostream>
using namespace std;

void insrtt(int arr[],int s){
    for(int  i = 1;i<s;i++){
        int mn = i;
        while(mn >=0 && arr[mn]<arr[mn-1]){
            int temp;
            temp = arr[mn-1];
            arr[mn-1]=arr[mn];
            arr[mn]=temp;
            mn--;

        }
    }
    
    }

int main(){
    int arr[]={2,1,3,5,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<s;i++)
    {
        cout << arr[i] << "\t";
    }
    insrtt(arr , s);
    cout << "after applying insertin short" << "\n";
    for(int  i = 0;i<s;i++){
        cout << arr[i] << "\t";
    }
}
