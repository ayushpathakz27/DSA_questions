#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;

    public:
    Complex(int r=0, int i=0){
        real = r;
        imaginary = i;
    }
    
    void display(){
        cout<<real<<" + "<< imaginary << "i"<<endl;
    }
};

int main(){
    Complex arr[50];
    int n;
        
    cout<<"Enter number of complex numbers: ";
    cin>>n;

    cout<<"Enter complex Numbers"<<endl;
    for(int i=0; i<n; i++){
        int real, imaginary;
        cout<<"Number "<<i+1<<": ";
                        
        cout<<"Real and Imaginary part: "<<endl;
        cin>>real>>imaginary;

        arr[i] = Complex(real, imaginary);
    }


    //output
    cout<<"Complex numbers are: "<<endl;
        for(int i=0; i<n; i++){
            cout<<"Number "<<i+1<<": "<<endl;
            arr[i].display();
        }


    return 0;
}