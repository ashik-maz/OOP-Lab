#include<iostream>
using namespace std;
void onescomp(int n);
int main()
{
    int x;
    cin >> x;
    if(x<0)
    cout<<x<<" is not positive number"<<endl;
    else
    onescomp(x);
    return 0;
}
void onescomp(int n)
{
    int r;
    if(n <= 1)
    cout << !n;
    else
    {
        r = n % 2;
        onescomp(n/2);
        cout << !r;
    }
}
