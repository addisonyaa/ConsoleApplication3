#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	int a1 = 60;
	int b1 = 25;
	int c1 = a1 & b1;
	int c2 = a1 | b1;
	int c3 = a1 - b1;
	int c4 = a1 + b1;
	int c5 = a1 != b1;
	int i = 0, b = 5;
	int i1 = 0, i2 = 0;
	int r1; 
	string s1;
	int w1, e1;
	int q1{};
	if (c1 != c3)
	{
		cout << "true" << endl;
	}

	if (a1 == 3)
	{
		cout << " " << endl;
		cin >> b1;
		cout << " " << endl;
		cin >> c1;
		cout << " " << s1 << endl;
	}
	if (q1 != 5) 
	{
		cin >> q1;
		cout << "" << endl; cin >> w1;
		cout << "" << endl; cin >> e1;
		r1 =  w1 + e1;
		cout << "" << r1 << endl;
	}
	if (a1 > b1 && c2 < c1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	if (c5 && c3 > 0)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	while (i < 10 && b < 10)
	{
		i++;
		i1 = i1 + i;
		i2 = i2 + i;
		cout << i1 << endl;
		cout << i2 << endl;
		b++;
	}
	return 0;
}