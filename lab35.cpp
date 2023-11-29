//exception handalling
#include<iostream>
using namespace std;
int main(){
    try{
        int x,y;cin>>x>>y;
        if(y==0){
            throw 1;
        }
        cout<<"Result: "<<(double)x/y;
    }
    catch(int a){
        cout<<"Divide by 0 is not possible"<<endl;
    }
    return 0;
}