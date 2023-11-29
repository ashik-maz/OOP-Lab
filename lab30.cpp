//friend class
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    A(){
        a=10;
    }
    friend class B;
};
class B{
    public:
    B(A& t){
    cout<<"private a= "<<t.a;
    }
};
int main(){
    A test;
    B tt(test);
    return 0;
}