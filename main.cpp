#include <iostream>

using namespace std;

int main() {
    double sayi1, sayi2;
    int secim;

    // Kullanıcıdan sayıları alma
    cout << "Birinci sayıyı girin: ";
    cin >> sayi1;
    cout << "İkinci sayıyı girin: ";
    cin >> sayi2;

    // Menü gösterme
    cout << "\nYapmak istediğiniz işlemi seçin:\n";
    cout << "1. Toplama\n";
    cout << "2. Çıkarma\n";
    cout << "3. Çarpma\n";
    cout << "4. Bölme\n";
    cout << "Seçiminiz: ";
    cin >> secim;




    switch (secim)
    {
    case 1:
        cout << "Toplama: " << sayi1 + sayi2 << endl;
        break;
    case 2:
        cout << "Cikarma: " << sayi1 - sayi2 << endl;
        break;
    case 3:
        cout << "Carpma: " << sayi1 * sayi2 << endl;
    case 4:
        if(sayi2 != 0){
            cout << "Bolme: " << sayi1 / sayi2 << endl;
        }
        else{
            cout << "Hata: Sifira bolme yapilamaz!" << endl;
        }            
    default:
        cout << "Gecersiz Islem!";
    }
    
    

    return 0;
}
