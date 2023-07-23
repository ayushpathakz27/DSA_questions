//18july2023 (q1)
//move negative numbers in left side and positive numbers on the right side 
#include<iostream>
using namespace std;

void rearrange(int arr[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            if(i != j){
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}
//Time complexity = O(n)

//We can also sort the array and will achieve the same result
// void sortArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[i]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// }
//sortArray will not be the ideal method as Time complexity becomes = O(n^2).

void display(int arr[], int n){
    cout<<"Arrays where the negative numbers are on left side are: "<<endl;
    rearrange(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void input(int arr[], int n){
    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"element "<<i+1<<":";
        cin>>arr[i];
    }
}



int main(){
    int arr[50], n;
    cout<<"Enter size of array: ";
    cin>>n;

    input(arr,n);
    display(arr, n);
    

    return 0;
}