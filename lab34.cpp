//iobject delefgation
#include<iostream>
using namespace std;
class first{
    public:
    void print(){
        cout<<"This is Function Delagation"<<endl;
    }
};
class second {
    first obj;
    public:
    void print(){
        obj.print();
    }
};
int main(){
    second obj2;
    obj2.print();
}

