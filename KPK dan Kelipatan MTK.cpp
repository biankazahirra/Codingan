#include <iostream>
using namespace std;
int main() {
    int x, y, z, d = 0;
    
    cin >> x;
    cin >> y;
    
    if(x > y){
        cout << "Input Salah"; }
    else if(x < 0 || x > 1000){
        cout << "Input Salah"; }
    else if(y < 0 || y > 1000){
        cout << "Input Salah"; }
    
    else{
    for(int a = x; a <= y; a++){
        z = d + a;
        if(z % 15 == 0 && z != 0){
            cout << "Lima Belas "; }
        else if(z % 18 == 0 && z != 0){
            cout << "Delapan Belas "; }
        else{ cout << z << " "; } } }
    
    return 0; 
}
