#include<iostream>
#include<map>
#include<string>

using namespace std;
void firstNonrepeating(string);
int main()
{
	string str = "Geekforseek";

	firstNonrepeating(str);
}

void firstNonrepeating(string s)
{
	map<char, int> M;
	for (int i = 0; s[i]; i++)
	{
		M[s[i]]++;
	}

	for (auto &it : M) {
		if (it.second == 1)
		{
			cout << "firstnonrepeating: " << it.first << '\n';
			break;
		}
	}
}