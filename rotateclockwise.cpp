#include<iostream>
using namespace std;

void rotate(int arr[], int n){
    int x = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[50];
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Given array is: "<<endl;
    display(arr, n);

    rotate(arr, n);
    cout<<"Rotated array is: "<<endl;
    display(arr, n);

    return 0;
}