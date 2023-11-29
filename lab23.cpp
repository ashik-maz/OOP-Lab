//virtual base class
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Ashik-cse-14"<<endl;
    }
};
class B: public virtual A{};
class C: public virtual A{};
class D: public B,public C{};
int main(){
    D obj; 
}