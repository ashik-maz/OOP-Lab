//abstruction/interface-27
#include<iostream>
using namespace std; 
// Interface(Abstract class 
// with pure virtual function) 
class base 
{ 
public: 
	virtual string getName() = 0; 
}; 

class child : public base 
{ 
public: 
	string getName() 
	{ 
	return "Ashik"; 
	} 
}; 

class fullname : public base 
{ 
public: 
	string getName() 
	{ 
	return "MAZ Ashik"; 
	} 
}; 

int main() 
{ 
	child obj1; 
	fullname obj2; 
	base* ptr; 
	ptr = &obj1; 
	cout << "nickname - " << ptr->getName()<<endl; 
	ptr = &obj2; 
	cout << "\nFull form - " << ptr->getName(); 
	return 0; 
}
 
