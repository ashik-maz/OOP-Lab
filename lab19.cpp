//Single inheritance (private)
#include<iostream>
using namespace std;
class parent{
    public:
    string name;
};
class child:private parent{
    public:
    void setname(){
        cout<<"Enter Name: "<<endl;
        cin>>name;
    }
    string getname(){
        return name;
    }
};
int main(){
    child obj;
    obj.setname();
    cout<<"name: "<<obj.getname()<<endl;
    return 0;
}