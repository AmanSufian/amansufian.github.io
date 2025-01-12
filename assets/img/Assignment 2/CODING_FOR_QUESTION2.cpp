#include <iostream>
#include <string.h>
using namespace std;


char getCode ();
char getCategory();
char getStatus();
double getOver();
double getSalaryB();
double getSalaryS();

int main(){
    double salary_employee = 2500;
    double net_salary,overtime;
    string employee_name;
    int employee_number ,amount;
    char employee_code ,Status,category,sizetoys;
    
    cout <<"Please enter employee name : ";
    getline(cin,employee_name);
    cout <<"Please enter employee number : ";
    cin >> employee_number;
    employee_code = getCode();
    if (employee_code == 'G'){
        Status = getStatus();
        if(Status =='P'){
            net_salary= salary_employee;
        }
        else{
            overtime = getOver();
            net_salary = salary_employee + overtime;
        }
    }
    else if(employee_code == 'K'){
        category =getCategory();
        if(category ==  'B'){
            net_salary=getSalaryB();
        }else{
            net_salary = getSalaryS();
        }
        
    }else {
        cout <<"\nPlease enter size of the toys(B/S/K) : ";
        cin >> sizetoys;
        while (sizetoys != 'B' && sizetoys != 'S' && sizetoys != 'K'){
            cout <<"\nInvalid input for toy's size";
            cout <<"\nPlease enter size of the toys : ";
            cin >> sizetoys;
        }
        cout <<"\nPlease enter amount of the toys : ";
        cin >> amount;
        while (amount <=0){
            cout <<"\nPlease enter amount more than 0";
            cout <<"\nPlease enter amount of the toys : ";
            cin >> amount;
        }
        if(sizetoys =='B'){
            net_salary = 8* amount;
        }else if(sizetoys=='S'){
            net_salary =5*amount;
        }else{
            net_salary = 2*amount;
        }
    }
    cout <<"\nThe employee name is "<< employee_name;
    cout <<"\nThe employee number is "<< employee_number;
    cout <<"\nThe net salary in a month for "<<employee_name<<" is RM"<<net_salary;
    return 0;
}

char getCode(){
    char c;
    cout <<"Please enter type of employee(G/K/S) : ";
    cin >> c;
    while(c !='G'&& c!= 'K' && c!='S'){
        cout << "\nPlease choose G, K or S\n";
        cout <<"Please enter type of employee : ";
        cin >> c;
    }
    return c;
}
char getCategory(){
    char k;
    cout <<"\nPlease enter contract worker category(B/S) : ";
    cin >> k;
    while(k !='B'&& k!= 'S' ){
        cout << "\nPlease choose either B or S";
        cout <<"\nPlease enter contract worker category(B/S) : ";
        cin >> k;
    }
    return k;
}
char getStatus(){
    char s;
    cout <<"\nPlease enter fixed paid employee category(P/B) : ";
    cin >> s;
    while(s !='P'&& s!= 'B' ){
        cout << "\nPlease choose either P or B\n";
        cout <<"\nPlease enter fixed paid employee category : ";
        cin >> s;
    }
    return s;
}
double getOver(){
    int h;
    double timepay;
    cout <<"\nPlease enter total hour for overtime work : ";
    cin >> h;
    if(h>0 && h<=10){
        timepay = h*15;
    }
    else if (h>10 && h<=20){
        timepay = 150 + (h-20)*12;
    }
    else{
        timepay = 0;
    }
    return timepay;
}
double getSalaryB(){
    int masa;
    double Salary;
    cout <<"\nPlease enter total hour working in a month :";
    cin >> masa;
    while(masa <0 || masa >100){
        cout <<"\nPlease enter total hour working between 0 to 100:";
        cin >> masa;
    }
    Salary = masa *20;
    return Salary;
}
double getSalaryS(){
    int masa;
    double Salary;
    cout <<"\nPlease enter total hour working in a month :";
    cin >> masa;
    while(masa <0 || masa >100){
        cout <<"\nPlease enter total hour working between 0 to 100:";
        cin >> masa;
    }
    if(masa >= 0 && masa <= 50){
        Salary = masa *10;
    }
    else {
        Salary = 500 + (masa -50)*5;
    }
    return Salary;
}


