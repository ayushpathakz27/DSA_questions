#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    bool result;
    //to check whether a number is negative
    if(n<=1){
        result = false;
    }
    
    //to check whether n is divisible by numbers less than n
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            result = false;
        }
        else{
            result = true;
        }
        break;
    }
    
    return result;

}

void displayPrime(int n){
    bool primeop = isPrime(n);
    if(primeop == true){
        cout<<"The number is prime."<<endl;
    }
    else{
        cout<<"The number is not prime."<<endl;
    }
    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Finding in optimized way (where we use sqrt(n))"<<endl;
    displayPrime(n);
    return 0;
}