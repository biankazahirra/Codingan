#include <iostream>
using namespace std;
int main (){
	
	float yard,mm,meter,inch,kaki;
	mm = 25.4;
	meter = 1000;
	inch = 12;
	kaki = 3;
	
	cout << "Yard:";
	cin >> yard;
	
	cout << "Dalam satuan meter:";
	cout << yard * (mm / meter * inch * kaki);
	
	return 0;
	}
