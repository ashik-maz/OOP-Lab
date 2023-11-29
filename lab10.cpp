#include<iostream>
using namespace std;
class matrix
{
    int m, n;
    int mat[50][50];
    public:
        void read()
        {
            cout<<"Enter row and column..."<<endl;
            cin>>m>>n;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>>mat[i][j];
                }
            }
        }
        void display()
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    friend matrix trans(matrix matIn);
};
matrix trans(matrix matIn)
{
    matrix mm;
    int row, col;
    row=matIn.n;
    col=matIn.m;
    mm.m=row;
    mm.n=col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mm.mat[i][j]=matIn.mat[j][i];
        }
    }
    return mm;
}
int main()
{
    matrix m1, m2;
    m1.read();
    m1.display();
    m2=trans(m1);
    m2.display();
    return 0;
}