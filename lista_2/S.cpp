#include <iostream>
#include <string>
using namespace std;

int main() {
    int M;
    cin >> M;

    int danoRestante = 0;
    int daleksDerrotados = 0;
    int cybermenDerrotados = 0;

    while (M--) {
        string tipo;
        int força;
        cin >> tipo >> força;

        if (danoRestante >= força) {
            danoRestante -= força;
            if (tipo == "Dalek") {
                daleksDerrotados++;
            } else if (tipo == "Cyberman") {
                cybermenDerrotados++;
            }
        } else {
            break;
        }
    }

    int N;
    cin >> N;

    if (danoRestante == 0) {
        cout << "Consegui derrotar todos!" << endl;
    } else {
        cout << "Consegui derrotar " << daleksDerrotados << " daleks e " << cybermenDerrotados << " cyberman. Preciso de ajuda!" << endl;
    }

    return 0;
}

