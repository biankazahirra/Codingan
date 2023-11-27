#include <iostream>

#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or 
input loop */

using namespace std;

int main(int argc, char** argv) {

 int awal, kebalikan=0, n;


 cout<<"----- PROGRAM MEMBALIKKAN ANGKA -----\n\n";

 cout<<"Masukkan angka : "; cin>>awal;

 n=awal;

 do{

  kebalikan=(kebalikan*10)+(n%10);

  n=n/10;

 }while(n>0);

 cout<<"---------------------------------------------\n";

 cout<<"Kebalikan dari angka "<<awal<<" adalah "<<kebalikan;

 cout<<"\n---------------------------------------------";

 
 getch();
}

