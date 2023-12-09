//9dec2023
#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int key){
    //base case
    if(n == 0){
        return false;
    }  

    //recursive call
    if(arr[0] == key){
        return true;
    }
    else{
        bool ans = LinearSearch(arr+1, n-1, key);
        return ans;
    }
}
int main(){

    int arr[] = {4,1,5,21,46,2,8,6,43,99};
    int n = sizeof(arr)/sizeof(n);
    int key;

    cout<<"Enter key: ";
    cin>>key;

    bool isThere = LinearSearch(arr, n, key);

    if(isThere == true){
        cout<<"Number exist in the array!"<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }



    return 0;
}