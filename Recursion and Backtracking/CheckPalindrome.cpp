//9dec2023
#include<iostream>
using namespace std;

bool CheckPalindrom(string& str, int i, int j){
    //base case
    if(i>j){
        return true;
    }

    //recursive call
    if(str[i] != str[j]){
        return false;
    }
    else{
        bool IsPalindrome = CheckPalindrom(str, i+1, j-1);
        return IsPalindrome;
    }
}

int main(){
    string str;
    cout<<"Enter a String: ";
    cin>>str;
    int i = 0;
    int j = str.length()-1;

    bool IsPalindrome = CheckPalindrom(str, i, j);

    if(IsPalindrome == true){
        cout<<"The Given string is Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }


    return 0;
}