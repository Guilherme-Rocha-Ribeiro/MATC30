#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() 
{
    string stg;
    int n_livros, consoante_max;
    cin >> n_livros >> consoante_max;
    vector<char> vogais = {'a', 'e', 'i', 'o', 'u'};
   
    cin.ignore();
    
    for (int i = 0; i < n_livros; i++)
    {
        getline(cin, stg);
   
        int qnt_consoante = 0;
        
        for (char ch : stg)
        {
            if (ch >= 'a' && ch <= 'z' && find(vogais.begin(), vogais.end(), ch) == vogais.end())
            {
                qnt_consoante++;
        
            }
        }

        if (qnt_consoante > consoante_max)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }

    return 0;
}

