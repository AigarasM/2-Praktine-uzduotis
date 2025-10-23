#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

struct Kursai
{
    double bendras;
    double pirkti;
    double parduoti;

};

map<string, Kursai> rates = {
    {"GBP", {0.8729, 0.8600, 0.9220}},
    {"INR", {104.6918, 101.3862, 107.8546}},
    {"USD", {1.1793, 1.14600, 1.2340}},
};

void rodytiKursus(string valiuta) {
    Kursai k = rates[valiuta];
    cout << valiuta << " kursai:\n";
    cout << "bendras: " << k.bendras << "\n";
    cout << "pirkti: " << k.pirkti << "\n";
    cout << "parduoti: " << k.parduoti << "\n";
}

double pirktiValiuta (string valiuta, double eurai) {
    return round(eurai * rates[valiuta].pirkti * 100) / 100;

}

double parduotiValiuta (string valiuta, double kiekis) {
    return round(kiekis * rates[valiuta].parduoti * 100) / 100;
}

int main () {
    cout << fixed << setprecision(2); 
 while (true) {


    int pasirinkimas;
    cout << "Pasirinkite veiksmą:\n";
    cout << "1 - Kursu palyginimas\n";
    cout << "2 - Pirkite valiuta\n";
    cout << "3 - Parduoti valiuta\n";
    cout << "4 - Iseiti is programos\n";
    cout << "Pasirinkite veiksma:";
    cin >> pasirinkimas;        

    if (pasirinkimas == 4) {
      cout << "Programa baigta.\n";
        break;
    }


    string valiuta;
    cout << "Pasirinkite valiuta (USD, EUR, GBP): ";
    cin >> valiuta;

    if (rates.find(valiuta) == rates.end()) {
        cout << "Neteisinga valiuta!\n";
        continue;
    }

    if (pasirinkimas ==1) {
        rodytiKursus(valiuta);
    }

    else if (pasirinkimas ==2) {
        double eurai;
        cout << "Iveskite suma eurais: ";
        cin >> eurai;
        cout << "Gausite " << pirktiValiuta(valiuta, eurai) << " " << valiuta << endl;
    }
    else if (pasirinkimas ==3) {
        double kiekis;
        cout << "Iveskite valiutos kieki: ";
        cin >> kiekis;
        cout << "Gausite " << parduotiValiuta(valiuta, kiekis) << " Eur " << endl;
        
    }
    else {
        cout << "Neteisingas pasirinkimas!\n";
    }
    cout << "\n(Testi spauskite enter)\n";
    cin.ignore (numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

        return 0;

    }