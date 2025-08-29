#include <iostream>
#include <string>

using namespace std;

bool Palindromo(const string& strg) 
{
    int inicio = 0;
    int fim = strg.length() - 1;

    while (inicio < fim) 
    {
        if (strg[inicio] != strg[fim]) 
        {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main() 
{
    string input;
    cin >> input;

    if (Palindromo(input)) 
    {
        cout << "Sim" << endl;
    } 
    else 
    {
        cout << "Nao" << endl;
    }

    return 0;
}

