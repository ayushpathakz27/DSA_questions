//Write a C++ program to find prime numbers between 1-1000. [Create a prime() function]
#include<iostream>
using namespace std;

bool prime(int n){
    if(n<=1){
        return false;
    }  
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
            break;
        }
        
    }
    return true;
}

int main(){
    int n = 1000;

    cout<<"Prime numbers between 1-1000"<<endl;
    for(int i=2; i<n; i++){
        if(prime(i)){
            cout<< i <<endl;
        }   
    }
    
    
    cout<<endl;


    return 0;
}