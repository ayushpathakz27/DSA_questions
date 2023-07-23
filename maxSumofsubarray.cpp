//Finding max sum of sub array using Kadane's algorithm
//Time complexity = O(N).
#include<iostream>
using namespace std;

int maxSumSubArray(int arr[], int n){
    int maxSum = 0;
    int CurSum = 0;

    for(int i=0; i<n; i++){
        CurSum += arr[i];
        if(CurSum > maxSum){
            maxSum = CurSum;
        }
        if(CurSum < 0){
            CurSum = 0;
        }
    }

    return maxSum;
}


int main(){
    int arr[50], n;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Maximum sum of sub array is: "<<maxSumSubArray(arr, n);
    cout<<endl;

    return 0;
}