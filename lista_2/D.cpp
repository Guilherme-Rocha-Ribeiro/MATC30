#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main() 
{
    int n1, n2, n3;
    
    cin >> n1;
    unordered_set<string> gerais; 
    for (int i = 0; i < n1; i++)
    {
        string stg;
        cin >> stg;
        gerais.insert(stg); 
    }
    
    cin >> n2;
    unordered_set<string> proibidas; 
    for (int i = 0; i < n2; i++)
    {
        string stg;
        cin >> stg;
        proibidas.insert(stg); 
    }
    
    cin >> n3;
    vector<string> usadas(n3); 
    for (int i = 0; i < n3; i++)
    {
        cin >> usadas[i]; 
    }
    
    for (const string& elemento : usadas)
    {
        if (gerais.find(elemento) != gerais.end()) 
        {
            cout << "Geral" << endl;
        } 
        else if (proibidas.find(elemento) != proibidas.end()) 
        {
            cout << "Proibido" << endl;
        }
    }

    return 0;
}

