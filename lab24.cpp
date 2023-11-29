//abstract class and pure virtual fucntion
#include<iostream>
using namespace std;
class Shape
{
	public: double a,b;
		void get_data ()
		{
			cin>>a>>b;
		}
		virtual void display_area () = 0;
};
class Triangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of triangle "<<0.5*a*b<<endl;
	}
};
class Rectangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of rectangle "<<a*b<<endl;
	}
};

int main()
{	
	Triangle t;
    cout<<"Enter Base and Height"<<endl;
    t.get_data();
    t.display_area();
    Rectangle r;
    cout<<"Enter Height and width"<<endl;
    r.get_data();
    r.display_area();
	return 0;	
}