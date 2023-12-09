#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    //base case
    if(n == 0 || n == 1)
        return true;
    
    //recursive call
    if(arr[0] > arr[1])
        return false;
    else{
        bool ans = isSorted(arr+1, n-1);
        return ans;
    }
}
int main(){
    int arr[100], n;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool sorted = isSorted(arr, n);

    if(sorted == true){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }

    return 0;
}