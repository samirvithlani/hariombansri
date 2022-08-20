#include<iostream>
using namespace std;

int main(){

    int choice,no1,no2,ans=0,ans1=1;
    start:
    cout<<"\n enter no1";
    cin>>no1;
    cout<<"\n enter no2";
    cin>>no2;


    cout<<"\n enter your choice :";
    cout<<"\n press 1 for sum :";
    cout<<"\n press 2 for sub :";
    cout<<"\n press 3 for div :";
    cout<<"\n press 4 for mul :";
    cin>>choice;

    switch(choice){

    case 1:
                ans = no1 + no2;
                cout<<"\n ans = "<<ans;
        break;
    case 2:
                ans = no1 - no2;
                cout<<"\n ans = "<<ans;
        break;
    case 3:
                ans1 = no1 * no2;
                cout<<"\n ans = "<<ans1;
        break;

    case 4:
                ans1 = no1 / no2;
                cout<<"\n ans = "<<ans1;
        break;
    default:
                cout<<"\n invalid choice!!";
                goto start;
        break;



    }




}

