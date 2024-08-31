#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num_alunos, num_turnos;
    cin >> num_alunos >> num_turnos;

    vector<string> alunos(num_alunos);

    for (int i = 0; i < num_alunos; ++i) {
        cin >> alunos[i];
    }

    for (int i = 0; i < num_turnos; ++i) {
        int num_removidos;
        cin >> num_removidos;
        vector<int> rm_index(num_removidos);

        for (int j = 0; j < num_removidos; ++j) {
            cin >> rm_index[j];
        }

        sort(rm_index.begin(), rm_index.end(), greater<int>());
        for (int j = 0; j < num_removidos; ++j) {
            int idx = rm_index[j];
            if (idx >= 0 && idx < alunos.size()) {
                alunos.erase(alunos.begin() + idx);
            }
        }
    }

    if (alunos.size() == 1) {
        cout << alunos[0] << " venceu!" << endl;
    }
}

