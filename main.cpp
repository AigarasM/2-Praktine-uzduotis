#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
int main() {
    // 1. Studentas
    string vardas = "Aigaras";
    string pavarde = "Mazuolis";
    int amzius = 19;
    string grupe = "PI-25";
    int kursas = 1;
    string programa = "Programu-sistemos";
    
    cout  << "1) Studentas: Aigaras Mazuolis" << endl;
    cout  << "Amzius: 19" << endl;
    cout  << "Grupe: PI-25" << endl;
    cout  << "Kursas: 1" << endl;
    cout  << "Programa: Programu sistemos" << endl;

    //2. Sporto klubas
    string klubas = "Kauno-zalgiris";
    int metai = 1944;
    string savininkas = "Paulius-Motiejunas";
    string arena = "Zalgirio-arena";
    int vietos = 15000;

    cout << "2) Klubas: Kauno Zalgiris" << endl;
    cout << "Ikurtas: 1994" << endl;
    cout << "Savininkas: Paulius Motiejunas" << endl;
    cout << "Arena: Zalgirio arena" << endl;

    //3. Automobilis
    string marke = "BMW";
    string modelis = "F30";
    int pagam_metai = 2015;
    int motoras = 335;
    string spalva = "Pilka";

    cout << "3) Automobilis: Bmw F30" << endl;
    cout << "Pagamintas: 2015" << endl; 
    cout << "Variklis: 335" << endl;
    cout << "Spalva: Pilka" << endl;

    //4. Skaiciavimas
    int a = 5, b = 10;
    double c = 2.5;

    cout << "4) Duoti skaiciai: 5, 10, 2.5" << endl;

    cout << 5 + 10 - 2.5 << endl;
    cout << 15 / 2 + 2.5 << endl;
    cout << 5 / static_cast<double>(10) + 2 * 2.5 << endl;
    cout << 14 % 3 + 6.3 + 10 / 5 << endl;
    cout << static_cast<int>(2.5) % 5 + 5 - 10 << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

    //5. skaiciai ir vidurkis
    double skaicius1 = 5, skaicius2 = 10, skaicius3 = 15, skaicius4 = 20, skaicius5 = 25;

    cout << "5) Naudojami skaiciai: 5, 10, 15, 20, 25" << endl;

    double vidurkis = (skaicius1 + skaicius2 + skaicius3 + skaicius4 + skaicius5) / 5.0;
    cout << "skaiciai: " << skaicius1 << " " << skaicius2 << " " << skaicius3 << " " << skaicius4 << " " << skaicius5 << endl;
    cout << "vidurkis = " << vidurkis << endl;
    
    // git commands should not be in C++ code

    

    system("pause");
    return 0;

}