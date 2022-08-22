#include<iostream>
using namespace std;


//inheritance...
//parent class can use property of child class called,child class can not use prop of parent class inheritanc
//advantege of inheritance reusablty of prop
//type of inheritance  5 type
// single inheritance
//multypule,lultylevel,hybride,hyrical inheriance
// 1 --> 1 child, 1 -> mult, ml -> a->b>c>d, hy: no pattenr , hy
//                       a
//                     b   c
//                    p  q m  n



class Vehicle{

public:
    string engine;
    int makeyear;

};

class Car : public Vehicle{

public:
    void addCarData(){

        cout<<"\n enter car name";
        cin>>engine;
        _flushall();
        cout<<"\n enter car makeyear";
        cin>>makeyear;
    }

    void displayCarData(){
        cout<<"\n car name = "<<engine;
        cout<<"\n make year ="<<makeyear;
    }

};
class Bike : public Vehicle{

public:
        void addBikeData(){

        cout<<"\n enter Bike name";
        cin>>engine;
        _flushall();
        cout<<"\n enter Bike makeyear";
        cin>>makeyear;
    }

    void displayBikeData(){
        cout<<"\n Bike name = "<<engine;
        cout<<"\n make year ="<<makeyear;
    }

};

int main(){

    //object --> Car
    Car c;
    c.addCarData();
    c.displayCarData();

    //-->Bike b
    Bike b;
    b.addBikeData();
    b.displayBikeData();



}
