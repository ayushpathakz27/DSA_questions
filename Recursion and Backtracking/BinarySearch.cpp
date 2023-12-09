//9dec2023
#include<iostream>
#include<algorithm>
using namespace std;

bool BinarySearch(int arr[], int h, int l, int key){

    int mid = l+((h-l)/2);

    //base case
    if(l>h){
        return false;
    }

    //recursive call
    if(arr[mid] == key){
        return true;
    }

    else if(arr[mid] < key){
        bool ans = BinarySearch(arr, h, mid+1, key);
        return ans;
    }
    else if(arr[mid] > key){
        bool ans = BinarySearch(arr, mid-1, l, key);
        return ans;
    }

}

int main(){

    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int n = sizeof(arr)/sizeof(n);
    int key;
    int l = 0;
    int h = n-1;

    cout<<"Enter key: ";
    cin>>key;

    bool isThere = BinarySearch(arr, h, l, key);

    if(isThere == true){
        cout<<"Number has been found using Binary search"<<endl;
    }
    else{
        cout<<"Number does not exist in the array"<<endl;
    }


    return 0;
}