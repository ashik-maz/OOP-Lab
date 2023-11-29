//Constructor initializer
#include<iostream>
using namespace std;
class A
{
    string a,b;
    public:
    A(string x,string y):a(x),b(y){}
    void print()
    {
        cout<<a<<endl<<b;
    }
};
int main()
{
    A obj("Ashik","Swapno");
    obj.print();
    return 0;
}
