#include<bits/stdc++.h>
using namespace std;


bool divby8(string s)
{
	if (s.length() == 0) return false;

	int l = s.length();

	if (l == 1)
	{
		if ((s[l - 1] - '0') % 8 == 0) return true;

		else return false;
	}

	int last = s[l - 1] - '0';
	int seclast = s[l - 2] - '0';
	int thirdlast = s[l - 3] - '0';

	if (l == 2)
	{
		if ((seclast * 10 + last) % 8 == 0) return true;
		return false;
	}

	else
	{	if ((thirdlast * 100 + seclast * 10 + last) % 8 == 0) return true;
		return false;
	}


}

int main()
{
	if (divby8("363588395960667043875487"))
	{cout << "YES";}
	else
	{cout << "NO";}
	return 0;
}
