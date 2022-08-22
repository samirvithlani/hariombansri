//function overloading.....

//create function with same name in same class but different params it is called fo

#include<iostream>

using namespace std;
class Amazone{

public:

    void ser(){

        cout<<"\n ser function called...";
    }
    void ser(int x){

        cout<<"\n ser function called... 1";
    }
    void ser(int y,int x){

        cout<<"\n ser function with 2 parm";
    }
    void ser(string name){

        cout<<"\n ser with string";
    }

};

int main(){

    Amazone a;
    a.ser(12);
    a.ser(12,25);
    a.ser("iphone");


}
