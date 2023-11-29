//vector,map,PQ(Priority Queue)-31
#include<bits/stdc++.h>
using namespace std;
void vector_1()
{
    vector<int> vc;
    int n, even = 0, odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even += x;
        else
            odd += x;
        vc.push_back(x);
    }
    cout << ((odd > even) ? "YES" : "NO") << endl;
}
void map_2()
{
    int nm;
    cin >> nm;
    map<string, double> mp;
    for (int i = 0; i < nm; i++)
    {
        string s;
        int a;
        cin >> s >> a;
        mp[s] = a;
    }
    string query;
    cin >> query;
    if (mp[query])
    {
        if (mp[query] >= 80.0)
            cout << "A+" << endl;
        else
            cout << "Not A+" << endl;
    }
    else
        cout << "No Student Record Available" << endl;
}
void dq_3()
{
    int p;
    cin >> p;
    priority_queue<int> pq;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    while (!pq.empty())
    {
        int y = pq.top();
        pq.pop();
        cout << y << " ";
    }
}
int main(){
    cout<<"Enter"<<endl<<"1-Vector"<<endl<<"2-Map"<<endl<<"3-PQ"<<endl;
    int m;cin>>m;
    switch(m){
        case 1: vector_1();break;
        case 2: map_2();break;
        case 3: dq_3();break;
        default: cout<<"Operation can't be performed"<<endl;
    }
return 0;
}
