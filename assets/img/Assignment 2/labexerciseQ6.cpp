#include <iostream>
using namespace std;

double getLength(){
    double l;
    cout<<"Please enter the length : ";
    cin >> l;
    return l;
}

double getWidth(){
    double w;
    cout <<"Please enter the width : ";
    cin >> w;
    return w;
}

double getArea(double len,double wid){
    double a;
    a = len * wid ;
    return a;
    
}

void displayData (double p, double s , double a ){
    cout<<"\nThe length is "<<p;
    cout <<"\nThe width is "<< s;
    cout <<"\nThe area is "<<p <<" X " << s <<" = " << a ;
    
}


int main()
{
    double length ,width, luas;
    length = getLength();
    cout << endl;
    width = getWidth();
    luas = getArea(length, width);
    displayData(length,width,luas); 
    return 0;
}