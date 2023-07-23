//to find the kth smallest number using functions

#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    //we will use 2 for loops 
    //to check whether an element is smaller than the 1st element in the array
    //if the number is small, then replace it with the first element of the array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void kthsmallest(int arr[], int n, int k){
    sortArray(arr, n);

    cout<<"Kth smallest number is: "<<arr[k-1]<<endl;

}
int main(){
    int n, arr[50], k;
    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter value of k: ";
    cin>>k;

    kthsmallest(arr, n, k);


    return 0;
}