//Bank deposit system
#include <iostream>
using namespace std;
class fixed_deposit
{
    long int p_amount;
    int years;
    float rate;
    float r_value;
public:
    fixed_deposit () {}
    fixed_deposit (long int p, int y, float r = 0.15)
    {
        p_amount = p;
        years = y;
        rate = r;
        r_value = p_amount;
        for (int i = 1 ; i <= y ; i++)
        {
            r_value = r_value + (1.0 + r);
        }
    }
    fixed_deposit (long int p, int y, int r)
    {
        p_amount = p;
        years = y;
        rate = r;
        r_value = p_amount;
        for (int i = 1 ; i <= y ; i++)
        {
            r_value = r_value * (1.0 + float (r)/100);
        }
    }
    void display ()
    {
        cout << endl << "Principal amount = " << p_amount << endl << "Return value = " << r_value << endl;
    }
};
int main ()
{
    fixed_deposit fd1, fd2, fd3;
    long int p;
    int y;
    float r;
    int R;
    cin >> p >> y >> R;
    fd1 = fixed_deposit (p , y , R);
    cin >> p >> y >> r;
    fd2 = fixed_deposit (p , y , r);
    cin >> p >> y;
    fd3 = fixed_deposit (p, y);
    fd1.display ();
    fd2.display ();
    fd3.display ();
    return 0;
}
