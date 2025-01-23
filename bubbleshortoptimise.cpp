#include <iostream>
using namespace std;
void bubble(int a[],int s){
    int temp;
    int count = 0;
    bool flag;
    for(int  i = 0 ;i<s;i++){
        flag = true;
        for(int j = 0; j<s-i-1;j++){
            if(a[j]>a[j+1]){
                temp  = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
               flag = false;

            }
        }
        if(flag==true){
            break;
        }
 
    }
    cout << "count = " << count << "\n";

    for(int i = 0;i<s;i++){
        cout << a[i] << "\t";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};

    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "After appuing bubble short" << "\n";
    bubble(arr,s);
}