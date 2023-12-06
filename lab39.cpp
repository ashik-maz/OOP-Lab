//file-39
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ofstream test;
	string line;
	test.open("sample.txt");
	while (test) {
		getline(cin, line);
		if (line == "-1")
			break;
		test<< line << endl;
	}
	test.close();
	ifstream fin;
	fin.open("sample.txt");
	while (getline(fin, line)) {
		cout << line << endl;
	}
	fin.close();
	return 0;
}
