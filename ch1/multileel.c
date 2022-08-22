#include<iostream>

using namespace std;

class Country{

//country class can access prop of country class(itself only) , country class can not use propof state ,city..
};
class State:public Country{

    //state class can access prop of country class only and can not access prop of city
};

class City : public State{
// -->city class can access prop of state classs and country class

};

int main(){



}
