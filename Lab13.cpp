//dynamic constructor
#include <iostream>
using namespace std;
class A {
	const char* p;
public:
	A()
	{
		// allocating memory at run time
		p = new char[6];
		p = "Ashik";
	}

	void display() { cout << p << endl; }
};
int main()
{
	A obj;
	obj.display();
}
