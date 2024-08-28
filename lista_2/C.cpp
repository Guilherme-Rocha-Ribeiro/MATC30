#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() 
{
    int qnt_stg, verify_list;
    cin >> qnt_stg;

    unordered_set<string> catalogo;
    string stg;
   
    for (int i = 0; i < qnt_stg; i++)
    {
        cin >> stg;
        catalogo.insert(stg);
    }
    
    cin >> verify_list;
   
    for (int i = 0; i < verify_list; i++)
    {
        cin >> stg;
        if (catalogo.find(stg) != catalogo.end())
        {
            cout << stg << " vive!" << endl;
        }
        else
        {
            cout << stg << " foi extinto :( " << endl;
        }
    }

    return 0;
}

