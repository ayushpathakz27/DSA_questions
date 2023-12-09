//9dec2023
#include<iostream>
using namespace std;

int Sum(int arr[], int n){
    //base case
    if(n == 0){
        return 0;
    }

    if(n==1){
        return arr[0];
    }
    int remPart = Sum(arr+1, n-1);
    int sum = arr[0] + remPart;
    

    return sum;
    

    //recursive call
    
    

    
}

int main(){
    int arr[100], n;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = Sum(arr, n);

    cout<<"Sum of all elements is array: "<<sum<<endl;

    return 0;
}