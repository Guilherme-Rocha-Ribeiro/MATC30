#include <iostream>
#include <string>

using namespace std;

      int pot(int base, int exp)
{ 
	int resp = 1;
	for (int i = 0; i < exp; i++)
	{
		resp *= base;
	}
	return resp;
}

int main()
{
int x, e;
cin >> x >> e;
cout << pot(x,e) << endl;
return 0;
}

