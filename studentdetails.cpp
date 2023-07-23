/*Q1.Create a class which stores name, roll number and total marks for a student. Input the
data for a student and display it*/
/*Q2. Modify the program to store marks in 10 subjects. Calculate the total marks and
percentage of a student and display it.*/

#include<iostream>
using namespace std;

class student{
    public:
    
    string name;
    int rollno;
    int age;
    float CGPA;
    int n = 10;
    int arr[50];
    float store = 0;

    

    void inputInfo();
    void display();
    void Marks();
    void TotalMarks();
    void Percentage();

};

void student :: Marks(){
    
    cout<<"Enter Marks of 10 subjects out of 100: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Subject "<< i+1 <<": ";
        cin>>arr[i];
    }

    cout<<"Marks are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Subject "<< i+1 <<": "<<arr[i]<<endl;
    }

}

void student :: TotalMarks(){
    
    for(int i=0; i<n; i++){
        store += arr[i];
    }
    cout<<"Total marks are: "<< store <<endl;
    
}

void student :: Percentage(){
    
    int percentage;

    cout<<"Percentage of marks is: ";
    cout<<store/10<<"%"<<endl;

}


void student :: inputInfo(){
    
    cout<<"Enter Name: ";
    cin>>name;

    cout<<"Enter Roll Number: ";
    cin>>rollno;

    cout<<"Enter Age: ";
    cin>>age;

    cout<<"Enter CGPA: ";
    cin>>CGPA;
}

void student :: display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<rollno<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"CGPA: "<<CGPA<<endl;

}


int main(){
    student s;
    cout<<"Enter Information:- "<<endl;
    
    s.inputInfo();
    s.Marks();
    s.display();
    s.TotalMarks();
    s.Percentage();

    return 0;
}