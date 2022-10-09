#include <iostream>
using namespace std;
int main(){
    int a, b;
    
    cin >> a >> b;
    
    if(a > 100 || a < 1){
        cout << "INPUTAN SALAH"; }
    else if(b > 100 || b < 1){
        cout << "INPUTAN SALAH"; }
    
    else{
        if(a == b){
            cout << a << " == " << b << endl;
            cout << a << " <= " << b << endl;
            cout << a << " >= " << b;}
        else{
            if(a != b){
                cout << a << " != " << b << endl; }
            if(a < b){
                cout << a << " < " << b << endl; }
            if(a <= b){
                cout << a << " <= " << b << endl; }
            if(a > b){
                cout << a << " > " << b << endl; }
            if(a >= b){
                cout << a << " >= " << b << endl; } } }
    
return 0;
} 
