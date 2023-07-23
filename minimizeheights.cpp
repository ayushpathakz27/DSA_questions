//First question to solve on my own

/*Take input of k and an array of size n of different height of towers 
1. either increase the value of elements in array by k or decrease the value by k
accordingly*/

#include<iostream>
#include<algorithm>
using namespace std;

void minHeight(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i]<k){
            arr[i] += k;
        }
        else if(arr[i]>k){
            arr[i] -= k;
        }
    }
    cout<<"Modified array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    
}

int main(){
    int arr[50], n, k;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter value of k: ";
    cin>>k;

    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }    

    minHeight(arr, n, k);
    cout<<endl;

    int min, max;
    sort(arr, arr+n);
    min = arr[0];
    max = arr[n-1];

    cout<<"Difference between max and min is : "<< max - min <<endl;

    


    return 0;
}