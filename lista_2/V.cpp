#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    queue<string> filaMulheres;
    queue<string> filaHomens;
    queue<string> wrong_q_M;
    queue<string> wrong_q_H;

    for (int i = 0; i < N; i++) 
    {
        string nome, genero;
        cin >> nome >> genero;

        if (genero == "M")
        {
            filaMulheres.push(nome);
        } 
        else 
        {
            wrong_q_H.push(nome);
        }
    }

    for (int i = 0; i < N; i++) 
    {
        string nome, genero;
        cin >> nome >> genero;

        if (genero == "H") 
        {
            filaHomens.push(nome);
        } 
        else 
        {
            wrong_q_M.push(nome);
        }
    }

    while (!wrong_q_M.empty()) 
    {
        filaMulheres.push(wrong_q_M.front());
        wrong_q_M.pop();
    }

    while (!wrong_q_H.empty()) 
    {
        filaHomens.push(wrong_q_H.front());
        wrong_q_H.pop();
    }

    cout << "Fila Feminina:" << endl;
    if (filaMulheres.empty()) 
    {
        cout << "Vazia" << endl;
    } 
    else 
    {
        while (!filaMulheres.empty()) 
        {
            cout << filaMulheres.front() << endl;
            filaMulheres.pop();
        }
    }

    cout << "Fila Masculina:" << endl;
    if (filaHomens.empty()) 
    {
        cout << "Vazia" << endl;
    } 
    else 
    {
        while (!filaHomens.empty()) 
        {
            cout << filaHomens.front() << endl;
            filaHomens.pop();
        }
    }

    return 0;
}

