#include <iostream>
using namespace std;
void selectionsrt(int arr[],int s){
    int chotu;
    for(int  i =0;i<s;i++){
        chotu = i;
        for(int j = i+1;j<s;j++){
            if(arr[chotu]>arr[j]){
                chotu=j;
            }
        }
        if(chotu!=i){
            int tmp = arr[i];
            arr[i]=arr[chotu];
            arr[chotu]=tmp;
        }
    }
}
int main(){
    int arr[]={9,2,1,6,7};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int  i= 0;i<s;i++){
        cout << arr[i] << "\t";
    }
    cout << "after appying seectiuon sort" << "\n";
    selectionsrt(arr , s);
    for(int  i = 0;i<s;i++){
        cout << arr[i] << "\t";
    }
}