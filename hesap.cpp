#include <iostream>

using namespace std;

int main() {
    double sayi1, sayi2;
    char islem;
    string devam = "evet";

    cout << "=== HESAP MAKINESI ===" << endl;

    while (devam == "evet"|| devam == "Evet") {
        cout << "\nBirinci sayiyi girin: ";
        cin >> sayi1;

        cout << "Islem secin (+, -, *, /): ";
        cin >> islem;

        cout << "Ikinci sayiyi girin: ";
        cin >> sayi2;

        switch(islem) {
            case '+':
                cout << "Sonuc: " << sayi1 + sayi2 << endl;
                break;
            case '-':
                cout << "Sonuc: " << sayi1 - sayi2 << endl;
                break;
            case '*':
                cout << "Sonuc: " << sayi1 * sayi2 << endl;
                break;
            case '/':
                if(sayi2 != 0) {
                    cout << "Sonuc: " << sayi1 / sayi2 << endl;
                } else {
                    cout << "Hata: Bir sayi sifira bolunemez!" << endl;
                }
                break;
            default:
                cout << "Gecersiz islem sectiniz!" << endl;
        }

        cout << "\nYeni bir islem yapmak ister misin? (evet/hayir): ";
        cin >> devam;
    }

    cout << "Gorusmek uzere!" << endl;
    return 0;
}