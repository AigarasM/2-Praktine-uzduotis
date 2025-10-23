#include <iostream>
#include <iomanip>

    // Pazymiai 8, 6, 5,
    void task1 () {
    double suma = 8 + 6 + 5;
    int kiek = 3,
    double vidurkis = suma / kiek;

    cout << fixed << setprecision(2)
    cout << "Vidurkis: " << vidurkis << "\n";
    if (vidurkis >= 5.0) cout << "Vidurkis teigiamas\n";
    }
    
    // Pazymiai 3, 4, 5, 2
    void task2() {
    double suma = 3 + 4 + 5 + 2;
    int kiek = 4;
    double vidurkis = suma / kiekis;

    cout << fixed << setprecision(2)
    cout << "Vidurkis: " << vidurkis << "\n";
    if (vidurkis >= 5.0)
    {
        cout << "Vidurkis teigiamas\n";
        else 
        cout < "Vidurkis neigiamas\n";
    }
    
    }
    //Pazymys 9
    void task3() {
        int pazymys = 9;
        if (pazymys == 10) {
            cout << "puiku\n";
        } else if (pazymys >= 9) {
            cout << "labai gerai\n";
        } else if (pazymys >= 7) {
            cout << "gerai\n";
        } else if (pazymys >= 5) {
            cout << "patenkinama\n";
        } else {
            cout << "egzaminas neislaikytas\n";
        }

    }
     //Pazymys 7
     void task4() {
        int pazymys = 7;
        switch (pazymys) {
            case 10: cout << "puiku\n"; break;
            case 9: cout << "labai gerai\n"; break;
            case 8:
            case 7: cout << "gerai\n"; break;
            case 6:
            case 5: cout << "patenkinamai\n"; break;
        }
     }
     
     // Suma nelyginiu skaiciu intervale 
     void task5() {
        int suma = 0;
        for (int i = 1; i <= 20; i += 2) suma += i;
        cout << "suma nelyginiu skaiciu intervale [1;20] = " << suma << "\n"
     }
