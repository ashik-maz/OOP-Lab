//call by reference
#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;//11,22-->22,11
    *y=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;
}