#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    string frase, palavra;
    int qnt_ocorrencias;

    getline(cin, frase);
    cin >> qnt_ocorrencias;
    cin.ignore(); // Por que usa isso ?
    getline(cin, palavra);

    frase.erase(remove(frase.begin(), frase.end(), ' '), frase.end()); 
    
	// A linha 17 remove os espacos das frases e a tornam em um longa string

    int count = 0;
    size_t pos = 0;
    while ((pos = frase.find(palavra, pos)) != string::npos) 
    // da onde veio esse string::npos ?
    {
        count++;
        pos += palavra.length();
    }

    cout << count << endl;
    if (count == qnt_ocorrencias) 
    {
        cout << "SIM!" << endl;
    } 
    else 
    {
        cout << "NAO!" << endl;
    }

    return 0;
}

