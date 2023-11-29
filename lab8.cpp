//array within a class----shoping list
#include<iostream>
using namespace std;
class item{
    int itemcode[50];
    float itemprice[50];
    int count;
    public:
        void cnt(){count=0;}
        void getitem();
        void dispsum();
        void remvitem();
        void dispitem();
};
void item::getitem(){
    cout<<"Enter item Code: ";
    cin>> itemcode[count];
    cout<<"Enter item cost: ";
    cin>> itemprice[count];
    count++;
}
void item::dispsum(){
    float sum=0;
    for(int i=0;i<count;i++)
        sum+=itemprice[i];
    cout<<"Sum of value: "<<sum<<endl;
}
void item::remvitem(){
    int a;cout<<"Enter Item Code: ";cin>>a;
    for(int i=0;i<count;i++){
        if(itemcode[i]==a)
        itemprice[i]=0;
    }
}
void item::dispitem(){
    cout<<"Code price: ";
    for(int i=0;i<count;i++){
        cout<<endl<<itemcode[i]<<"  "<<itemprice[i];
    }
    cout<<endl;
}
int main(){
    item order;
    order.cnt();
    int x;
    do{
    cout<<"1-Add item"<<endl<<"2-Display total value"<<endl<<"3-Delete an item"<<endl<<"4-display all item"<<endl<<"5-Quit"<<endl;
    cin>>x;
    switch(x)
    {
        case 1: order.getitem();break;
        case 2: order.dispsum();break;
        case 3: order.remvitem();break;
        case 4: order.dispitem();break;
        case 5: break;
        default: cout<<"Error input"<<endl;
    }
    }
    while(x!=5);
    

}