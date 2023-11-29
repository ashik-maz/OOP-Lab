//1+2^1+3^2+...........n^n-1
#include<bits/stdc++.h>
using namespace std;
int recur(int p,int q){
    int result =1;
    if(q!=0)
    result=(p*(p,q-1));
    else
    return 1;
    return result;
}
int main(){
    int n,sum=0;
    cout<<"Enter Range Number of a Series: ";
    cin>>n;
    cout<<"The series is: ";
    for(int i=1;i<=n;i++){
        if(i==1 && n>1)
            cout<<i<<'+';
        else if(i==1)
        cout<<i;
        else if(i<n)
        cout<<i<<'^'<<i-1<<'+';
        sum+=recur(i,i-1);
    }
    cout<<endl<<"Result:"<<sum<<endl;
    return 0;
}