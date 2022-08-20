#include<iostream>
using namespace std;

class Vehicle{
//all prop are private in c++ by default

    public:
    int makeyear=2010;
    string vehName="Audi r8";

    void demo(){
        cout<<"\n demo function called...";
    }

    int demo1(){

        return 100;
    }

    int sum(int no1,int no2){

        int c;
        c = no1 + no2;
        return c;
    }

};

int main(){

    //object creation
    int x;
    Vehicle v;
    cout<<"\n make year ="<<v.makeyear;
    cout<<"\n Name ="<<v.vehName;

    v.demo();
    x = v.demo1();
    cout<<"x = "<<x;

    int x1=100,y1=200;
    int ans = v.sum(x1,y1);
    cout<<"\n sum ="<<ans;


}
