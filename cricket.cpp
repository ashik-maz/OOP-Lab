#include <bits/stdc++.h> 
using namespace std;  
int main() 
{ 
    int totalrun = 0; 
    srand(time(0));
    int target; 
    target = (rand() % 25) + 1; 
    cout << "~~~~~~~~ CRICKET GAME ~~~"<< "~~~~~~~" << endl; 
    cout << "Target score "<< target << "\n"; 
    while (1) { 
        int player = 0; 
        int a; 
        if (totalrun > target) { 
            cout << "YOU WON" << endl;
            cout<<"your score =" << totalrun<<endl; 
            exit(0); 
        } 
        else { 
            a = (rand() % 6) + 1;
            cout<<"your score =" << totalrun<<endl; 
            cout << "Enter no. between "<< "1 to 6" << endl; 
            cin >> player;  
            cout << "System: " << a << endl; 
            if (player == a) { 
                cout << "OUT !"<<endl<<"your score =" << totalrun<< endl; 
                exit(0); 
            } 
            else { 
                totalrun = totalrun + player; 
            } 
        } 
    } 
    return 0; 
}