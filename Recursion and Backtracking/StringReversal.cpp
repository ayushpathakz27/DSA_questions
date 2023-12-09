//9dec2023
#include<iostream>
using namespace std;

void StringReverse(string& str, int start, int end){
    //base case
    if(end < start){
        return;
    }

    swap(str[start], str[end]);
    start++;
    end--;

    StringReverse(str, start, end);
}

int main(){
    string str;
    int start, end;

    cout<<"Enter a string: ";
    cin>>str;

    start = 0;
    end = str.length()-1;

    StringReverse(str, start, end);

    cout<<"Reversed String is: "<<str<<endl;


    return 0;
}