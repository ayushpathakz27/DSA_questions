#include<iostream>
using namespace std;

bool isPrime(int n){
    //checking if n is less than 1 or not
    if(n<=1){
        return false;
    }
    //checking if the n is divisible with numbers less than n
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;//false meaning the number is not prime
        }
        break;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool prime = isPrime(n);

    if(prime){
        cout<<"The number is Prime."<<endl;
    }
    else{
        cout<<"The number is not Prime"<<endl;
    }

    return 0;
    
}