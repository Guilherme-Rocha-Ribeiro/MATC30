// Inventario caotico
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
   string stg_invetory, stg_busca;
   vector<string> inventario;
   cin >> stg_invetory;
   inventario.push_back(stg_invetory);
   while (stg_invetory != "fim") 
   {
      cin >> stg_invetory;
      inventario.push_back(stg_invetory);
   } 
		
   cin >> stg_busca;
   bool encontrado = false;
   for (int i = 0; i < inventario.size(); i++)
   {
   	if (stg_busca == inventario[i])
   	{
   		encontrado = true;
   		break;
   	} 
   }
   if (encontrado)
    {
        cout << "item encontrado";
    }
    else
    {
        cout << "voce ainda nao descobriu este item";
    }


    return 0;
}


