//This keyword
#include <iostream>
using namespace std;
class member
{

    int x, y;
public:
    member (int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
    void display ()
    {

        cout << x << endl << y << endl;
    }
};
int main ()
{
    member Ashik(20, 30);
    Ashik.display ();
    return 0;
}
