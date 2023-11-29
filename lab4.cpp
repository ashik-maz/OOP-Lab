#include<iostream>
using namespace std;
class salary_sheet
{
    string name;
    int id;
    float basic,house_rent,transport,benifit_plan,statutory_bonus,provident_fund,taxs,insurance,net_salary;
public:
    void get_data(int c);
    void put_data(int c);
    void find_net_salary();
};
void salary_sheet::get_data(int c){
    cout<<"Enter Employee Data: "<<c<<endl;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Basic salary: ";
    cin>>basic;
}
void salary_sheet::put_data(int c){
    cout<<"Employee: "<<c<<endl<<"Name: "<<name<<endl<<"ID:"<<id<<endl<<"Net Salary:"<<net_salary<<endl;
}
void salary_sheet::find_net_salary(){
    /*
        house_rent=20%
        transport=5%
        benifit_plan=15%
        statutory_bonus=10%
        provident_fund=10%
        taxs=5%
        insurance=10%;
    */
    house_rent=basic*0.30;
    transport=basic*0.10;
    benifit_plan=basic*0.15;
    statutory_bonus=basic*0.15;
    provident_fund=basic*0.1;
    taxs=basic*0.05;
    insurance=basic*0.1;
    net_salary= basic+house_rent+transport+benifit_plan+statutory_bonus-provident_fund-taxs-insurance;
}
int main(){
    int n,i;
    cin>>n;
    salary_sheet employee[n];
    for(i=0;i<n;i++){
        employee[i].get_data(i+1);
        employee[i].find_net_salary();
        employee[i].put_data(i+1);
    }
    return 0;
}