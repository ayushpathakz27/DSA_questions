//MAX AND MIN IN ARRAY

#include<iostream>
using namespace std;

struct MINMAX{
    int min;
    int max;
};

void sort(int arr[], int n){
    //we will use 2 for loops 
    //to check whether an element is smaller than the 1st element in the array
    //if the number is small, then replace it with the first element of the array
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){//we will take j=i+1 as the 1st element is smallest, so we will take the next element
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

MINMAX getMaxMin(int arr[], int n){
    MINMAX minmax;
    
    sort(arr, n);
    minmax.min = arr[0];
    minmax.max = arr[n-1];

    return minmax;

}

void printArray(int arr[], int n){

    MINMAX minmax = getMaxMin(arr, n);
    cout<<"Maximum: "<<minmax.max<<endl;
    cout<<"Minimum: "<<minmax.min<<endl;

}

int main(){
    int n, arr[50];
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements of array:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    getMaxMin(arr, n);
    printArray(arr, n);

    return 0;

}
