//constructor is a special function which has same name
//as class name 3 type of const in cpp
//default constructor, param constructor,copy constructor
//const has no return type
//use of constructor is to initilize instance variable of class

#include<iostream>

using namespace std;
class Bank{

public:

    //class level variable
    int age;

    void demo(){

        int x;//local variable...
        age = 15;

    }

     Bank(){

        cout<<"\n default constructor..";
        age = 150;
    }
    Bank (int x){

        cout<<"\n param constructor "<<x;
    }

};

int main(){

    //how to call constructor..
    //1 obj = 1 constructor
    Bank b;
    Bank b2(12);
    cout<<"\n age ="<<b.age;
    cout<<"\n age ="<<b2.age;

}
