#include <iostream>
using namespace std;

int main(){

    cout << "segitiga rata kiri keatas:" << endl;
    for(int i = 1; i <= 5; i++){
        for(int j = 0; j < i; j++){ //mengatur banyaknya barisan ke atas
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    cout << "segitiga rata kanan ke bawah:" << endl; 
    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){ //mengatur banyaknya barisan ke bawah
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    cout << "segitgia:" << endl;
    for(int i = 1; i <= 5; i++){
        
        for (int j = 1; j <= 5 - i; j++){ // mengatur agar segitiga tidak rata kiri
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++){ // mengatur agar barisan segitiga
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

