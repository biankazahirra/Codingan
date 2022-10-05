#include <iostream>
using namespace std;
int main() {
    int nyawa;
    string jawaban, tebakan;
    
    cout << "Masukkan nyawa: ";
    cin >> nyawa;
    if(nyawa > 10){
        cout << "INPUTAN SALAH"; }
    if(nyawa < 1){
        cout << "INPUTAN SALAH"; }
        
    else if(nyawa <= 10){
    cout << "Masukkan jawaban: ";
    cin >> jawaban;
    
        for(int a = nyawa; a > 0 ; a--){
        cout << "Masukkan tebakan: ";
        cin >> tebakan;
        
        if(tebakan == jawaban){
            cout << "MENANG " << a;
            break; }
            
        else if (a == 1){
            cout << "KALAH 0";
            break; } } }
            
    return 0; }
