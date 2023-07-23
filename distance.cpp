#include<iostream>
#include<cmath>
using namespace std;

class Point{
    double x;
    double y;

    public:
        Point(double xCoord, double yCoord) : x(xCoord), y(yCoord){}

        double distance(Point other){
            double dx = x- other.x;
            double dy = y- other.y;
            return sqrt((dx*dx)+(dy*dy));
        }

        void display(){
            cout<<"("<< x <<","<< y <<")" ;
        }
};


int main(){
    cout<<"Enter Coordinates:- "<<endl;
    cout<<"Point 1:"<<endl;
    cin>>

    return 0;
}