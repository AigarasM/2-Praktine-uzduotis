#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void skaiciuotiBilietuPardavimus() {
    ifstream ivestis("C:\\Users\\Vartotojas\\Desktop\\PI25\\bilietai.txt");
    ofstream isvestis("C:\\Users\\Vartotojas\\Desktop\\PI25\\rezultatai_bilietai.txt");

    if (!ivestis) {
        cout << "Nepavyko atidaryti failo bilietai.txt" << endl;
        return;
    }

    double kaina = 0;
    int kiekis = 0;
    double bendraSuma = 0;
    int bendrasKiekis = 0;

    
    while (ivestis >> kaina >> kiekis) {
    cout << "Kaina: " << kaina << " EUR, Kiekis: " << kiekis << endl;
    bendraSuma += kaina * kiekis;
    bendrasKiekis += kiekis;
}

    }

    cout << fixed << setprecision(2);
    cout << "\nParduota bilietu: " << bendrasKiekis << endl;
    cout << "Bendra pardavimu suma: " << bendraSuma << " EUR" << endl;

    isvestis << fixed << setprecision(2);
    isvestis << "Parduota bilietu: " << bendrasKiekis << endl;
    isvestis << "Bendra pardavimu suma: " << bendraSuma << " EUR" << endl;

    ivestis.close();
    isvestis.close();
    cout << "Rezultatai irašyti i rezultatai_bilietai.txt\n";
}

void atnaujintiAtlyginimus() {
    ifstream ivestis("C:\\Users\\Vartotojas\\Desktop\\PI25\\atlyginimai.txt");
    ofstream isvestis("C:\\Users\\Vartotojas\\Desktop\\PI25\\nauji_atlyginimai.txt");

    if (!ivestis) {
        cout << "Nepavyko atidaryti failo atlyginimai.txt" << endl;
        return;
    }

    string pavarde, vardas;
    double atlyginimas, padidejimas;

    cout << fixed << setprecision(2);
    cout << "\nAtnaujinti atlyginimai:\n";

    while (ivestis >> pavarde >> vardas >> atlyginimas >> padidejimas) {
        double naujas = atlyginimas * (1 + padidejimas / 100);
        cout << pavarde << " " << vardas << " " << naujas << " EUR" << endl;
        isvestis << pavarde << " " << vardas << " " << naujas << endl;
    }

    ivestis.close();
    isvestis.close();
    cout << "Rezultatai irašyti i nauji_atlyginimai.txt\n";
}

int main() {
    int pasirinkimas;

    do {
        cout << "1 - Skaiciuoti bilietu pardavimus\n";
        cout << "2 - Atnaujinti darbuotoju atlyginimus\n";
        cout << "0 - Baigti programa\n";
        cout << "Iveskite pasirinkima: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                skaiciuotiBilietuPardavimus();
                break;
            case 2:
                atnaujintiAtlyginimus();
                break;
            case 0:
                cout << "Programa baigta.\n";
                break;
            default:
                cout << "Neteisingas pasirinkimas.\n";
                break;
        }
    } while (pasirinkimas != 0);

    return 0;
}
