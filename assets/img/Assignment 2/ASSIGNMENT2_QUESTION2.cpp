#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Input (int Item_No[], double Price [], double Discount[]);
void Output (int Item_No[], double Price [], double Discount[]);


int main (){
	int Item_No[10];
	double Price[10];
	double Discount[10];
	
	Input (Item_No, Price, Discount);
	Output (Item_No, Price, Discount);
	
	return 0;
}

void Input (int Item_No[], double Price[], double Discount[]){
	fstream inputfile ("input.txt", ios::in);
	
	if(!inputfile){
		cout << "The file cannot be opened." << endl;
		exit(1);
	}
	
	for (int i = 0; i < 10 ; i++){
		inputfile >> Item_No[i] >> Price [i] >> Discount [i];
	}
	inputfile.close();
}

void Output (int Item_No[], double Price[], double Discount[]){
	cout << "Number of items on sale" << endl;
	cout << "\n----------------------------------------------\n" << endl;
	cout << setw(10) << "Item No" << setw(10) << "Price" << setw(15) << "Discount(%)" << setw(25) << "Price after discount" << endl;
	cout << endl << endl;
	for (int i = 0; i < 10; i++){
		double PriceAfterDisc = Price [i] - (Price [i] * Discount[i] / 100);
		cout << setw (10) << Item_No[i] << setw(10) << fixed << setprecision (0) << Price[i] << setw(10) << fixed << setprecision (0)<< Discount [i] << setw(20) << fixed << setprecision(1) << PriceAfterDisc << endl; 
	}
}