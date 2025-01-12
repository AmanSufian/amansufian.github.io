#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int array1 [5];
    int array2 [5];
    int array3 [10];
    int total =0;
    int odd = 0;
    double average ;
    int max,min;
    
    cout <<"Enter table array1:"<<endl;
    
    for (int i = 0 ; i < 5 ; i++ ){
        cout <<"Please enter an integer: ";
        cin >> array1[i];
        }
        cout << endl;
        
    cout <<"Enter table array2:"<<endl;
     for (int i = 0 ; i < 5 ; i++ ){
        cout <<"Please enter an integer: ";
        cin >> array2[i];
        }

    copy(array1, array1+5, array3);
    copy(array2, array2+5, array3+5);
    
    cout<< endl;
    cout <<"Output:"<<endl;
    cout <<"Table array3:"<<endl;
    
    for (int i=0; i<10; i++){
        cout<<array3[i]<<setw(4);
    }
        min = array3[0];
        max = array3[0];
        
    for (int i = 1;i<10 ; i++){
        if (max<array3[i]){
        max = array3[i];
            
        }
    }

    for (int i =1; i<10 ; i++){
        if (min >array3[i]){
        min = array3[i];
        }
    }
    
    for(int i = 0; i<10 ; i++){
        total+=array3[i];
    }
     for(int i =0; i<10; i++){
        if(array3[i]%2 ==1){
           odd+=1;
        }
        
     }
    average = total/10.0;
    cout<<"\n\nThe avearage number of ten number in array3 = "<<average<<endl;
    cout<<"The range value of array3 = "<<max-min<<endl;
    cout<<"The number of odd numbers = "<< odd;
    
   
        
    }
    
