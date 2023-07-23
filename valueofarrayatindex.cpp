#include<iostream>
using namespace std;

int main(){
    int num[20], n, index;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements of array:";
    for(int i=1; i<n+1; i++){
        cin>>num[i];
    }

    cout<<"Enter index: ";
    cin>>index;


    cout<<"The value at "<< index <<" index is : "<<num[index]<<endl;

    return 0;
}