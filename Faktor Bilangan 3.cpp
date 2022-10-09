#include <iostream>
using namespace std;
int main(){
    int bilbul, b = 0;
    
    cin >> bilbul;
    
    for(int a = bilbul; a >= 1; a--){
        b = b + a;
        if (bilbul % a == 0){
            cout << a << endl;
        }
    }
}
