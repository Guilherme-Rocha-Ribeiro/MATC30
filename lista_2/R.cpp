#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int pesoTotal = 0;

    for (int i = 0; i < N; ++i) {
        string nome;
        int peso;
        cin >> nome >> peso;
        pesoTotal += peso;
    }

    int capacidade;
    cin >> capacidade;

    if (pesoTotal <= capacidade) {
        cout << "Vamos todos encontrar a montanha!" << endl;
    } else {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
    }

    return 0;
}

