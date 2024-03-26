#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputData(){
    cout << "masukan bilangan Pertama : ";
    cin >> bilangan1;
    cout << "masukan bilangan Kedua : ";
    cin >> bilangan2;
}
int penjumlahan(int a, int b){
    return a + b;
}
int pengurangan(int a, int b){
    return a - b;
}
int perkalian(int a, int b){
    return a * b;
}
float pembagian(int a, int b){
    return a / b;
}
int main() {
    int pilihan;  
    
    cout << "simple kalkulator" << endl;
    cout << "=================" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Keluar" << endl;
    cout << "=================" << endl;
    cout << "Masukan Menu Pilihan" << endl;
}