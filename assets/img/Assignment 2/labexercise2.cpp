#include <iostream>
using namespace std;
int main(){
    cout <<"************** Lab EX2 **************"<<endl;
    char op_type;
    char loop_char = 'y';
    float num1, num2, result;
   do{
    cout <<"Please enter number 1";
    cin>> num1;
    cout <<"Please enter number 2";
    cin >> num2;
    cout <<"Please enter operation";
    cin>> op_type;
        switch(op_type){
            case '+' : result=num1+num2;
                        break;
            case '-' : result=num1-num2;
                        break;
            case '*' : result=num1*num2;
                        break;
            case '/' : result=num1/num2;
                        break;
            default : cout << "ERROR MESSAGE";
                        break;
            }
        cout << "The result is: "<< result<<endl;
        cout <<"Number 1 is: "<<num1<<endl;
        cout <<"Number 2 is: "<<num2<<endl;
        cout <<"Operator is: "<<op_type<<endl;
        cout<<"Do you want to stop the program(enter y to stop):";
        cin>>loop_char;
        

   }while (loop_char!='y');
   return 0;
}