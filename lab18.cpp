//Single inheritance (public)
#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"This is example of single inheritence";
    }
};
class child:public parent{};
int main(){
    child obj;
    return 0;
}